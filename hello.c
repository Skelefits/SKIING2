//Castle of Dispear as an optional location. You fork to it if you take the easy path. The hard path has more point gates.

//Enemy skiers!

//Evil trees? Have them side step into the skier.

#include <conio.h>
#include <dos.h>


#define VIDEO_MEMORY 0xB800
#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25

//72
int play_width = 80; //The current width of the game area.
int play_width_target = 80; //Incrementally change the width of the game area to this.
int play_row = SCREEN_HEIGHT + 5; //Used for showing trees in that static levels.
int play_course = 0;
int play_course_next = 0;
int play_progress = 0;
int play_sound = 1;

int quit_game = 0;

unsigned int game_speed = 1; //Used to be 30!

int debug = 0;

//Maps are split up into four zones/columns.
#define ZONES 8
#define BANKS 16
#define ZONE_WIDTH 10


//Colours
#define BLACK        0x0
#define BLUE         0x1
#define GREEN        0x2
#define CYAN         0x3
#define RED          0x4
#define MAGENTA      0x5
#define BROWN        0x6
#define LIGHT_GRAY   0x7
#define DARK_GRAY    0x8
#define LIGHT_BLUE   0x9
#define LIGHT_GREEN  0xA
#define LIGHT_CYAN   0xB
#define LIGHT_RED    0xC
#define LIGHT_MAGENTA 0xD
#define YELLOW       0xE
#define WHITE        0xF

int title_colour = LIGHT_GREEN;
int title_length = 0;
int title_x = 0;
int hud_colour = BLUE;
int map_colour = BLACK;

//Skiers
#define X 0
#define Y 1
#define LEFT 2
#define RIGHT 3

#define SKIN 2 //0 is no object. 1 is Tree


#define HEIGHT 3 //Object
#define DIRECTION 4
#define NEXTDIRECTION 5

#define STATUS 6 //Skier Status, 1 for active, 2 for stunned, 3 recovering, 4 retiring
#define COLOUR 7
#define SKIER_KEY_LEFT 8
#define SKIER_KEY_UP 9
#define SKIER_KEY_RIGHT 10

#define DISPLAY 1

//Skins
#define SKIN_TERMINATE 0 //Don't move any objects after this object index.
#define SKIN_BANK1 1 //Set bank[z][1] to something.
#define SKIN_BANK2 2 //Set bank[z][2] to something.
#define SKIN_WIDTH 3 //Change play width to this.
#define SKIN_SCREEN 4 //Load the bank with screen data.
#define SKIN_TREE 5
#define SKIN_TREE_RANDOM 6

int collision[4][SCREEN_WIDTH-2] = { 
    {4},
    {4},
    {4},
    {4}
};

#define KEY_ENTER 13

#define KEY_ESC 27

#define KEY_PLUS 43
#define KEY_MINUS 45

#define KEY_1 49
#define KEY_2 50
#define KEY_3 51
#define KEY_4 52
#define KEY_5 53
#define KEY_6 54
#define KEY_7 55
#define KEY_8 56
#define KEY_9 57
#define KEY_B 66
#define KEY_M 77
#define KEY_N 78

#define KEY_LB 98
#define KEY_LM 109
#define KEY_LN 110

#define KEY_UP 72
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_DOWN 80

#define KEY_S 83
#define KEY_LS 115





#define POSITION[1] 80

//skier[?][1], Y location
//skier[?][11], 0 for inactive skier, 1 for player controlled skier, and 2 for AI controlled skier.
//skier[?][12], Score!
//skier[?][13], Rank/Position! If 0, everyone is on the same line. If 1-4, we are using positions.
//skier[?][14], Target Y!

int skier[4][15] = {
    {15, SCREEN_HEIGHT-5, 2, 79, 4, 5, 1, CYAN, KEY_LEFT, KEY_UP, KEY_RIGHT, 1, 0, 1, SCREEN_HEIGHT-5},
    {15, 10, 2, 79, 4, 5, 1, LIGHT_RED, KEY_1, KEY_2, KEY_3, 0, 0, 2, SCREEN_HEIGHT-5},
    {15, 15, 2, 79, 4, 5, 1, LIGHT_BLUE, KEY_7, KEY_8, KEY_9, 0, 0, 3, SCREEN_HEIGHT-5},
    {15, 5,  2, 79, 4, 5, 1, MAGENTA, KEY_4, KEY_5, KEY_6, 1, 0, 4, SCREEN_HEIGHT-5},
};

int x_seed = 5;
int y_seed = -3;
int h_seed = 4;

int char_on_screen = 0;

//object[0][i][X]
//object[0][i][Y]
//object[0][i][SKIN]

#define OBJECTS 5

int bank[ZONES][2] = {
	{0, 8},
	{1, 9},
	{2, 10},
	{3, 11},
	{16, 12},
	{16, 13},
	{16, 14},
	{16, 15}
};



int object[BANKS][OBJECTS][4] = {
	{
		{2, -1, SKIN_TREE, 3},
		{4, -6, SKIN_SCREEN, 0},
		{6, -10, SKIN_TREE, 3},
		{4, -14, SKIN_TREE, 3},
		{2, -20, SKIN_BANK1, 1}
    },
	{
		{6, -2, SKIN_WIDTH, 80},
		{8, -8, SKIN_TREE_RANDOM, 3},
		{6, -13, SKIN_TREE_RANDOM, 3},
		{4, -6, SKIN_SCREEN, 0},
		{6, -30, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -6, SKIN_TREE, 3},
		{4, -9, SKIN_TREE, 3},
		{6, -10, SKIN_TREE, 3},
		{4, -15, SKIN_TREE, 3},
		{2, -20, SKIN_TREE, 3}
    },
	{
		{2, -20, SKIN_TREE, 3},
		{4, -22, SKIN_TREE, 3},
		{6, -24, SKIN_TREE, 3},
		{4, -28, SKIN_TREE, 3},
		{2, -30, SKIN_TREE, 3}
    },
	{
		{2, -10, SKIN_TERMINATE, 3},
		{4, -15, SKIN_TREE_RANDOM, 3},
		{6, -20, SKIN_TREE_RANDOM, 3},
		{4, -25, SKIN_TREE_RANDOM, 3},
		{2, -30, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -10, SKIN_TREE_RANDOM, 3},
		{4, -60, SKIN_TREE_RANDOM, 3},
		{6, -100, SKIN_TREE_RANDOM, 3},
		{4, -140, SKIN_TREE_RANDOM, 3},
		{2, -200, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -1, SKIN_TREE_RANDOM, 3},
		{4, -6, SKIN_TREE_RANDOM, 3},
		{6, -10, SKIN_TREE_RANDOM, 3},
		{4, -14, SKIN_TREE_RANDOM, 3},
		{2, -20, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -3, SKIN_TREE_RANDOM, 3},
		{4, -8, SKIN_TREE_RANDOM, 3},
		{6, -12, SKIN_TREE_RANDOM, 3},
		{4, -16, SKIN_TREE_RANDOM, 3},
		{2, -25, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -1, SKIN_TREE, 6},
		{4, -6, SKIN_TREE, 3},
		{6, -10, SKIN_TREE, 3},
		{4, -14, SKIN_TREE, 3},
		{2, -20, SKIN_BANK1, 1}
    },
	{
		{6, -2, SKIN_TERMINATE, 3},
		{8, -8, SKIN_TREE_RANDOM, 3},
		{6, -13, SKIN_TREE_RANDOM, 3},
		{8, -16, SKIN_TREE_RANDOM, 3},
		{6, -30, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -6, SKIN_TREE, 3},
		{4, -9, SKIN_TREE, 3},
		{6, -10, SKIN_TREE, 3},
		{4, -15, SKIN_TREE, 3},
		{2, -20, SKIN_TREE, 3}
    },
	{
		{2, -20, SKIN_TREE, 3},
		{4, -22, SKIN_TREE, 3},
		{6, -24, SKIN_TREE, 3},
		{4, -28, SKIN_TREE, 3},
		{2, -30, SKIN_TREE, 3}
    },
	{
		{2, -10, SKIN_TERMINATE, 3},
		{4, -15, SKIN_TREE_RANDOM, 3},
		{6, -20, SKIN_TREE_RANDOM, 3},
		{4, -25, SKIN_TREE_RANDOM, 3},
		{2, -30, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -10, SKIN_TREE_RANDOM, 3},
		{4, -60, SKIN_TREE_RANDOM, 3},
		{6, -100, SKIN_TREE_RANDOM, 3},
		{4, -140, SKIN_TREE_RANDOM, 3},
		{2, -200, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -1, SKIN_TREE_RANDOM, 3},
		{4, -6, SKIN_TREE_RANDOM, 3},
		{6, -10, SKIN_TREE_RANDOM, 3},
		{4, -14, SKIN_TREE_RANDOM, 3},
		{2, -20, SKIN_TREE_RANDOM, 3}
    },
	{
		{2, -3, SKIN_TREE_RANDOM, 3},
		{4, -8, SKIN_TREE_RANDOM, 3},
		{6, -12, SKIN_TREE_RANDOM, 3},
		{4, -16, SKIN_TREE_RANDOM, 3},
		{2, -25, SKIN_TREE_RANDOM, 3}
    }
};

union REGS regs;


void hide_cursor() {
    union REGS regs;
    regs.h.ah = 0x01;
    regs.h.ch = 14;
    regs.h.cl = 15;
    int86(0x10, &regs, &regs);
}

void set_cursor_position(unsigned int x, unsigned int y) {
    regs.h.ah = 0x02;
    regs.h.bh = 0;
    regs.h.dl = x - 1;
    regs.h.dh = y - 1;
    int86(0x10, &regs, &regs);
}

void draw_ascii_point(unsigned int x, unsigned int y, char symbol) {
    draw_ascii_point_colour(x, y, symbol, LIGHT_GRAY, BLACK);
}

void draw_ascii_line(unsigned int rowleft, unsigned int rowright, unsigned int columntop, unsigned int columnbottom, char symbol, unsigned char colour) {
    int background = 0x00;
    char far *video = MK_FP(VIDEO_MEMORY, 0);
    
    unsigned int baseOffset = rowleft - 1;
    while (baseOffset <= rowright - 1) {
        unsigned int offset = ((columntop - 1) * SCREEN_WIDTH + baseOffset) * 2;
        video[offset] = symbol;
        video[offset + 1] = (background << 4) | (colour & 0x0F);
        baseOffset++;
    }
    
    if (columnbottom != columntop) {
        unsigned int currentColumn = columntop;
        while (currentColumn <= columnbottom) {
            unsigned int offset = ((currentColumn - 1) * SCREEN_WIDTH + (rowleft - 1)) * 2;
            video[offset] = symbol;
            video[offset + 1] = (background << 4) | (colour & 0x0F);
            currentColumn++;
        }
    }
}

void next_course() {
	play_course++;
	update_map(75, 4, RED, BLACK);
	play_progress = 0;
	give_points(50);
}

void draw_ascii_point_colour(unsigned int x, unsigned int y, char symbol, unsigned char foregroundcolour, unsigned int backgroundcolour) {
    char far *video = MK_FP(VIDEO_MEMORY, 0);
    unsigned int offset = ((y - 1) * SCREEN_WIDTH + (x - 1)) * 2;
    video[offset] = symbol;
    video[offset + 1] = (backgroundcolour << 4) | (foregroundcolour & 0x0F);
}

void draw_ascii_point_direct(unsigned int x, unsigned int y, char symbol) {
    set_cursor_position(x, y);
    regs.h.ah = 0x0E;
    regs.h.al = symbol;
    //regs.h.bl = 0x05;
    int86(0x10, &regs, &regs);
}

unsigned int get_length(char* text) {
    unsigned int length = 0;
    while (*text) {
        length++;
        text++;
    }
    return length;
}

void hide_title() {
	char* text = (char*)malloc((title_length + 1) * sizeof(char));
	unsigned int i = 0;
	while (i < title_length) {
		text[i] = ' ';
		i++;
	}
	text[title_length] = '\0';
	
	i = 2;
	while (i < SCREEN_HEIGHT) {
		draw_text(title_x, i, text, 1, title_colour, hud_colour);
		i++;
	}
	
}

void draw_title(unsigned int x, char* text) {
	title_length = get_length(text);
	title_x = x;
	draw_text(title_x, 2, text, 1, title_colour, hud_colour);
}

void draw_text(unsigned int x, unsigned int y, const char* text, unsigned int align, 
               unsigned char foregroundcolour, int backgroundcolour) {
    char far *video = MK_FP(VIDEO_MEMORY, 0);
    unsigned int text_length;
    unsigned int cx;
    unsigned int offset;
    unsigned char attr;
    const char* curr_char;
    
    /* Pre-calculate attribute and get text info */
    attr = (backgroundcolour << 4) | (foregroundcolour & 0x0F);
    text_length = get_length(text);
    curr_char = text;
    
    /* Calculate start position with proper alignment */
    cx = x;
    if (align != 0) {
        cx = x - (text_length / 2);
    }
    offset = ((y - 1) * SCREEN_WIDTH + (cx - 1)) * 2;
    
    /* Handle text in pairs for speed while maintaining proper positioning */
    while (text_length >= 2) {
        video[offset] = *curr_char;
        video[offset + 1] = attr;
        video[offset + 2] = *(curr_char + 1);
        video[offset + 3] = attr;
        
        offset += 4;
        curr_char += 2;
        text_length -= 2;
    }
    
    /* Handle final character if present */
    if (text_length) {
        video[offset] = *curr_char;
        video[offset + 1] = attr;
    }
}

void clear_collision() {
	int i = 0;
	while (i < 4) {
		int l = 0;
		while (l < play_width-2) {
			collision[i][l] = 4;
			l++;
		}
		i++;
	}
}

void give_points(int points) {
	//Give all active skiers points.
	int i = 0;
	while (i < 4) {
		if (skier[i][11] == 1) { //Skier active!
			skier[i][12] = skier[i][12] + points;
		}
		i++;
	}
}

int count_skier(int check, int value) {
	int count = 0;
	int i = 0;
	while (i < 4) {
		if (skier[i][check] == value) {
			count++;
		}
		i++;
	}
	return count;
}


//Skiers from the ranking if they aren't active.
void change_position(int i) {
	int j = 0;
	int temp = 0;
	while (j < 4) {
		if (skier[i][13] < skier[j][13]) {
			if (skier[i][12] < skier[j][12]) {
				temp = skier[i][13];
				skier[i][13] = skier[j][13];
				skier[j][13] = temp;
			}
			
		}
		j++;
	}
}

void order_skiers() {
	//Check score, order skiers based on that.
	
	//skier[?][11] > 0 determines if the skier is active
	//skier[?][12], Score!
	//skier[?][13], Position! If 0, everyone is on the same line. If 1-4, we are using positions.

	int total_skiers = 0;
	int i = 0;
	
	if (count_skier(13, 0) == 4) {
		//Skier's aren't in a position. Exit.
		return;
	} else {
		total_skiers = count_skier(11, 1);
	}
	
	//Reorder skiers based on score.
	while (i < 4) {
		change_position(i);
		i++;
	}
	i = 0;
	//Set the skiers positions.
	while (i < 4) {
		
		//if only skier, set their skier[?][1] to SCREEN_HEIGHT-5
		//if two skiers, set the top scoring one to SCREEN_HEIGHT-5-2 and the next scoring one to SCREEN_HEIGHT-5+2
		//if three skiers, set the bottom scoring one to SCREEN_HEIGHT-5+2, the next one to SCREEN_HEIGHT-5-2, the top scoring to SCREEN_HEIGHT-5-2-4
		//if three skiers, set the bottom scoring one to SCREEN_HEIGHT-5+2, the next one to SCREEN_HEIGHT-5-2, the next to SCREEN_HEIGHT-5-2-4, and the top scoring to SCREEN_HEIGHT-5-2-4-4.


        switch(total_skiers) {
            case 1:
                skier[i][14] = SCREEN_HEIGHT - 5;
                break;
            case 2:
                if (skier[i][13] == 1) skier[i][14] = SCREEN_HEIGHT - 8;
                if (skier[i][13] == 2) skier[i][14] = SCREEN_HEIGHT - 4;
                break;
            case 3:
                if (skier[i][13] == 1) skier[i][14] = SCREEN_HEIGHT - 12;
                if (skier[i][13] == 2) skier[i][14] = SCREEN_HEIGHT - 8;
                if (skier[i][13] == 3) skier[i][14] = SCREEN_HEIGHT - 4;
                break;
            case 4:
                if (skier[i][13] == 1) skier[i][14] = SCREEN_HEIGHT - 12;
                if (skier[i][13] == 2) skier[i][14] = SCREEN_HEIGHT - 9;
                if (skier[i][13] == 3) skier[i][14] = SCREEN_HEIGHT - 6;
                if (skier[i][13] == 4) skier[i][14] = SCREEN_HEIGHT - 3;
                break;
        }
		i++;
	}
}

void make_sound(int freq, int mod) {
	if (play_sound == 1) {
		sound(freq+(mod*10));
	}
}

int hit_collision(int player) {
	int impact = collision[player][skier[player][X] - skier[player][LEFT]];
	if (impact == 5) {
		make_sound(300, player);
		skier[player][STATUS] = 2; //Stunned!
		skier[player][12]--;
		//skier[player][NEXTDIRECTION] = 2;
		return 1;
	} else if (impact == 6) {
		//We are between some point flags! Give 1 point!
		make_sound(1200, player);
		skier[player][12]++;
	} else if (impact == 7) {
		//We are between a secret level gate!
		make_sound(1400, player);
		skier[player][12] = skier[player][12] + 5;
		play_course_next = play_course + 11;
	}
	return 0;
}

void draw_collision() {
	int i = 0;
	while (i < 4) {
		int l = 0;
		while (l < play_width-2) {
			if (collision[i][l] == 5) {
				draw_ascii_point((l + skier[i][LEFT]), skier[i][Y], '#');
			} else if (collision[i][l] < 4) {
				draw_ascii_point((l + skier[i][LEFT]), skier[i][Y], 'Y');
			} else if (collision[i][l] == 4) {
				//draw_ascii_point((l + skier[i][LEFT]), skier[i][Y], '_');
			} else if (collision[i][l] == 6) {
				//We are between some point flags!
				draw_ascii_point((l + skier[i][LEFT]), skier[i][Y], 'I');
			} else if (collision[i][l] == 7) {
				//We are between a secret level gate!
				draw_ascii_point((l + skier[i][LEFT]), skier[i][Y], 'S');
			}
			l++;
		}
		i++;
	}
}

void write_collision(unsigned int left, unsigned int right, unsigned int y, int unsigned type) {
	if (y < SCREEN_HEIGHT) {
		int i = 0;
		while (i < 4) {
			if (y == skier[i][Y]) {
				int l = left - skier[i][LEFT];
				if (l < skier[i][LEFT]) {
					int l = skier[i][LEFT];
				}
				while (l <= right - skier[i][LEFT]) {
					if (l <= skier[i][RIGHT] - skier[i][LEFT]) {
						if (collision[i][l] == 4) {
							collision[i][l] = type;
						}
					}
					l++;
				}
			}
			i++;
		}
	}
}

void draw_controls(int player) {
	draw_text(skier[player][X] - 10, skier[player][Y] + 4, "LEFT", 0, skier[player][COLOUR], BLACK);
	draw_text(skier[player][X] - 1, skier[player][Y] + 4, "FRY", 0, skier[player][COLOUR], BLACK);
	draw_text(skier[player][X] + 6, skier[player][Y] + 4, "RIGHT", 0, skier[player][COLOUR], BLACK);
	
	if (skier[player][8] != KEY_LEFT) {
		draw_ascii_point_colour(skier[player][X] - 8, skier[player][Y] + 5, skier[player][8], skier[player][COLOUR], BLACK);
	}
	if (skier[player][9] == KEY_UP) {
		draw_text(skier[player][X], skier[player][Y] + 5, "ARROW   KEYS", 1, skier[player][COLOUR], BLACK);;
	} else {
		draw_text(skier[player][X] - 1, skier[player][Y] + 4, "FRY", 0, skier[player][COLOUR], BLACK); draw_ascii_point_colour(skier[player][X], skier[player][Y] + 5, skier[player][9], skier[player][COLOUR], BLACK);
	}
	if (skier[player][10] != KEY_RIGHT) {
		draw_ascii_point_colour(skier[player][X] + 8, skier[player][Y] + 5, skier[player][10], skier[player][COLOUR], BLACK);
	}
}

void draw_line(unsigned int rowleft, unsigned int rowright, unsigned int columntop, unsigned int columnbottom, unsigned int foregroundcolour, unsigned int backgroundcolour) {
    unsigned int color = (backgroundcolour << 4) | (foregroundcolour & 0x0F);
    regs.h.ah = 0x06;
    regs.h.al = 0x00;
    regs.h.bh = color;
    regs.h.ch = columntop - 1;
    regs.h.dh = columnbottom - 1;
    regs.h.cl = rowleft - 1;
    regs.h.dl = rowright - 1;
    int86(0x10, &regs, &regs);  
}


void clear_screen(int xl, int xr, int ct, int cb) {
    regs.h.ah = 0x06;
    regs.h.al = 0x00;
    regs.h.bh = 0x07;
    regs.h.cl = xl-1;
    regs.h.dl = xr-1;
    regs.h.ch = ct-1;
    regs.h.dh = cb-1;
    int86(0x10, &regs, &regs);
}

void clear_playarea() {
    regs.h.ah = 0x06;
    regs.h.al = 0x00;
    regs.h.bh = 0x07;
    regs.h.ch = 0x01;
    regs.h.cl = 0x01;
    regs.h.dh = 0x18;
    regs.h.dl = 0x1C;
    int86(0x10, &regs, &regs);
}

void update_map(x, y, foregroundcolour, backgroundcolour) {
	y = y + 1;
    if (play_course == 31) {
        draw_ascii_point_colour(x, y-2, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y-1, 46, foregroundcolour, backgroundcolour);
    } else if ((play_course == 20) || (play_course == 21)) {
        draw_ascii_point_colour(x+1, y-1, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y, 88, foregroundcolour, backgroundcolour);
		play_course_next = 0;
    } else if (play_course == 19) {
        draw_ascii_point_colour(x+2, y, 64, CYAN, backgroundcolour);
		if (play_course_next == 26) {
			draw_ascii_point_colour(x+2, y+1, 46, foregroundcolour, backgroundcolour);
		} else {
			draw_ascii_point_colour(x+1, y+1, 46, foregroundcolour, backgroundcolour);
		}
		
    } else if (play_course == 18) {
        draw_ascii_point_colour(x+1, y+1, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x, y+2, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 17) {
        draw_ascii_point_colour(x, y+2, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+3, 46, foregroundcolour, backgroundcolour);
    } else  if (play_course == 16) {
        draw_ascii_point_colour(x+1, y+3, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+4, 88, foregroundcolour, backgroundcolour);
		
		
    } else if (play_course == 28) {
        draw_ascii_point_colour(x+2, y+1, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+2, 88, foregroundcolour, backgroundcolour);
		
    } else if (play_course == 27) {
        draw_ascii_point_colour(x+2, y+2, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+3, 46, foregroundcolour, backgroundcolour);
		
    } else if (play_course == 26) {
        draw_ascii_point_colour(x+2, y+3, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+4, 88, foregroundcolour, backgroundcolour);
		
		//Create new path.
		draw_ascii_point_colour(x+2, y+1, 46, foregroundcolour, backgroundcolour);
		draw_ascii_point_colour(x+2, y+2, 88, foregroundcolour, backgroundcolour);
		
		//Gray out other path.
		draw_ascii_point_colour(x+1, y+3, 46, DARK_GRAY, backgroundcolour);
		draw_ascii_point_colour(x, y+2, 88, DARK_GRAY, backgroundcolour);
		draw_ascii_point_colour(x+1, y+1, 46, DARK_GRAY, backgroundcolour);
		
    } else if (play_course == 15) {
        draw_ascii_point_colour(x+2, y+4, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+5, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 14) {
        draw_ascii_point_colour(x+1, y+5, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x, y+6, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 13) {
        draw_ascii_point_colour(x, y+6, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+7, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 12) {
        draw_ascii_point_colour(x+1, y+7, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+8, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 11) {
        draw_ascii_point_colour(x+2, y+8, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+9, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 10) {
        draw_ascii_point_colour(x+1, y+9, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x, y+10, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 9) {
        draw_ascii_point_colour(x, y+10, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+11, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 8) {
        draw_ascii_point_colour(x+1, y+11, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+12, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 7) {
        draw_ascii_point_colour(x+2, y+12, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+13, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 6) {
        draw_ascii_point_colour(x+1, y+13, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x, y+14, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 5) {
        draw_ascii_point_colour(x, y+14, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+15, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 4) {
        draw_ascii_point_colour(x+1, y+15, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+2, y+16, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 3) {
        draw_ascii_point_colour(x+2, y+16, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x+1, y+17, 46, foregroundcolour, backgroundcolour);
    } else if (play_course == 2) {
        draw_ascii_point_colour(x+1, y+17, 64, CYAN, backgroundcolour);
        draw_ascii_point_colour(x, y+18, 88, foregroundcolour, backgroundcolour);
    } else if (play_course == 1) {
		draw_ascii_point_colour(x, y-2, 88, foregroundcolour, backgroundcolour);
        draw_ascii_point_colour(x, y+18, 64, CYAN, backgroundcolour);
    } else if (play_course == 0) {
        draw_ascii_point_colour(x, y+18, 88, foregroundcolour, backgroundcolour);
    }
}

void draw_map(x, y, foregroundcolour, backgroundcolour) {
	y = y + 1;
	draw_line(x-2, x+4, 2, 24, WHITE, BLACK);




	if (play_course == 21) {
        draw_ascii_point_colour(x, y-2, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x, y-2, 88, foregroundcolour, backgroundcolour);
    }
    if (play_course == 20) {
        draw_ascii_point_colour(x+1, y-1, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y-1, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 19) {
        draw_ascii_point_colour(x+2, y, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+2, y, 88, foregroundcolour, backgroundcolour);
    }
    if (play_course == 18) {
        draw_ascii_point_colour(x+1, y+1, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+1, 46, foregroundcolour, backgroundcolour);
    }
    if (play_course == 17) {
        draw_ascii_point_colour(x, y+2, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x, y+2, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 16) {
        draw_ascii_point_colour(x+1, y+3, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+3, 46, foregroundcolour, backgroundcolour);
    }
	
	
    //if (play_course == 28) {
    //    draw_ascii_point_colour(x+2, y+1, 64, CYAN, backgroundcolour);
    //} else {
    //    draw_ascii_point_colour(x+2, y+1, 46, foregroundcolour, backgroundcolour);
    //}
    //if (play_course == 27) {
    //    draw_ascii_point_colour(x+2, y+2, 64, CYAN, backgroundcolour);
    //} else {
    //    draw_ascii_point_colour(x+2, y+2, 88, foregroundcolour, backgroundcolour);
    //}
    //if (play_course == 26) {
    //    draw_ascii_point_colour(x+2, y+3, 64, CYAN, backgroundcolour);
    //} else {
    //    draw_ascii_point_colour(x+2, y+3, 46, foregroundcolour, backgroundcolour);
    //}
	

    if (play_course == 15) {
        draw_ascii_point_colour(x+2, y+4, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+2, y+4, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 14) {
        draw_ascii_point_colour(x+1, y+5, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+5, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 13) {
        draw_ascii_point_colour(x, y+6, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x, y+6, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 12) {
        draw_ascii_point_colour(x+1, y+7, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+7, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 11) {
        draw_ascii_point_colour(x+2, y+8, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+2, y+8, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 10) {
        draw_ascii_point_colour(x+1, y+9, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+9, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 9) {
        draw_ascii_point_colour(x, y+10, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x, y+10, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 8) {
        draw_ascii_point_colour(x+1, y+11, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+11, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 7) {
        draw_ascii_point_colour(x+2, y+12, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+2, y+12, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 6) {
        draw_ascii_point_colour(x+1, y+13, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+13, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 5) {
        draw_ascii_point_colour(x, y+14, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x, y+14, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 4) {
        draw_ascii_point_colour(x+1, y+15, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+15, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 3) {
        draw_ascii_point_colour(x+2, y+16, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+2, y+16, 88, foregroundcolour, backgroundcolour);
    }

    if (play_course == 2) {
        draw_ascii_point_colour(x+1, y+17, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x+1, y+17, 46, foregroundcolour, backgroundcolour);
    }

    if (play_course == 1) {
        draw_ascii_point_colour(x, y+18, 64, CYAN, backgroundcolour);
    } else {
        draw_ascii_point_colour(x, y+18, 88, foregroundcolour, backgroundcolour);
    }
}




void delay_ms(int milliseconds) {
    unsigned int i, j;
	if (milliseconds > 0) {
		for (i = 0; i < milliseconds; i++) {
			//for (j = 0; j < 1000; j++) {
			keyboard_input();
		}
	}
	keyboard_input();

}

void remove_tree(int basex, int basey, int height) {
	int i = 1;
    while (i <= height) {
		int y = basey-height+i-1;
		int xl = basex-i+1;
		int xr = basex+i-1;
		

		if (y > 1 && y < SCREEN_HEIGHT) {
			
			if (xl > 1 && xl != xr) {
				if (DISPLAY == 1) {
					if (basex < play_width) {
						draw_ascii_point(xl, y, ' ');
					}
				} else {
					//draw_line(xl, xl, y, y, 0);
				}
			}
			if (xr < play_width) {
				if (DISPLAY == 1) {
					draw_ascii_point(xr, y, ' ');
				} else {
					//draw_line(xr, xr, y, y, 0);
				}
			}
			
		}
		i = i + 1;
	}

}

void draw_tree_base(int basex, int basey, int height) {
    if (basey > 1 && basey < SCREEN_HEIGHT) {
        int xl = basex - height + 1;
        int xr = basex + height - 1;

        //Boundary check.
        if (xl < 2) {
            xl = 2;
        }
        if (xr > play_width - 1) {
            xr = play_width - 1;
        }

        if (DISPLAY == 1) {
			draw_ascii_line(xl, basex-1, basey, basey, '/', GREEN);
			if (basex < play_width) {
				draw_ascii_line(basex, basex, basey, basey, '|', GREEN);
				if (basex < xr) {
					draw_ascii_line(basex+1, xr, basey, basey, '\\', GREEN);
				}
			}
        } else {
            //Draw a block color for the base
            //draw_line(xl, xr, basey, basey, 160);
        }
		//collision logic
		write_collision(xl, xr, basey, 5);
    }
}

void draw_skier(int i) {
    if (skier[i][Y] < SCREEN_HEIGHT) {
		int max_y1 = skier[i][Y] + 1;
		int max_y2 = skier[i][Y] + 2;
		if (skier[i][STATUS] != 2) {
			draw_ascii_point_colour(skier[i][X], skier[i][Y], 'O', skier[i][COLOUR], BLACK);
		}
		if (skier[i][DIRECTION] == 4) {
			//Left
			if (skier[i][X] > skier[i][LEFT] && max_y1 < SCREEN_HEIGHT) {
				draw_ascii_point_colour(skier[i][X]-1, max_y1, 92, skier[i][COLOUR], BLACK);
			}
			if (skier[i][X]-1 > skier[i][LEFT]) {
				draw_ascii_point_colour(skier[i][X]-2, skier[i][Y], 92, skier[i][COLOUR], BLACK);
			}
			if (max_y1 < SCREEN_HEIGHT) {
				draw_ascii_point_colour(skier[i][X], max_y1, 124, skier[i][COLOUR], BLACK);
				if (max_y2 < SCREEN_HEIGHT) {
					draw_ascii_point_colour(skier[i][X], max_y2, 92, skier[i][COLOUR], BLACK);
				}
			}
		} else if (skier[i][DIRECTION] == 6) {
			//Right
			if (skier[i][X] < skier[i][RIGHT] && max_y1 < SCREEN_HEIGHT) {
				draw_ascii_point_colour(skier[i][X]+1, max_y1, 47, skier[i][COLOUR], BLACK);
			}
			if (skier[i][X]+1 < skier[i][RIGHT]) {
				draw_ascii_point_colour(skier[i][X]+2, skier[i][Y], 47, skier[i][COLOUR], BLACK);
			}
			if (max_y1 < SCREEN_HEIGHT) {
				draw_ascii_point_colour(skier[i][X], max_y1, 124, skier[i][COLOUR], BLACK);
				if (max_y2 < SCREEN_HEIGHT) {
					draw_ascii_point_colour(skier[i][X], max_y2, 47, skier[i][COLOUR], BLACK);
				}
			}
		} else if ((skier[i][DIRECTION] == 5) || (skier[i][DIRECTION] == 2) || (skier[i][DIRECTION] == 8)) {
			
			if (max_y1 < SCREEN_HEIGHT) {
				if (skier[i][X] > skier[i][LEFT]) {
					draw_ascii_point_colour(skier[i][X]-1, max_y1, 45, skier[i][COLOUR], BLACK);
				}
				draw_ascii_point_colour(skier[i][X], max_y1, 124, skier[i][COLOUR], BLACK);
				if (skier[i][X] < skier[i][RIGHT]) {
					draw_ascii_point_colour(skier[i][X]+1, max_y1, 45, skier[i][COLOUR], BLACK);
				}
				if (max_y2 < SCREEN_HEIGHT) {
					draw_ascii_point_colour(skier[i][X], max_y2, 124, skier[i][COLOUR], BLACK);
				}
			}
		}
	}
}

void draw_tree(int basex, int basey, int height) {
	//trunk
	int i = 1;

    while (i <= height) {
		int y = basey-height+i;
		int xl = basex-i+1;
		int xr = basex+i-1;
		if (xl < 2) {
			xl = 2;
		}
		if (xr > 29) {
			xr = 29;
		}
		
		if (y > 1 && y < SCREEN_HEIGHT) {
			if (DISPLAY == 1) {
				//draw_ascii_line(xl, xl, y, y, '|', 0x1F);
			} else {
				draw_line(xl, xr, y, y, 50, 160);
				//hide_cursor();
			}
		}
		i = i + 1;
    }
}

void seed() {
	x_seed++;
	//y_seed++;
	h_seed++;
	if (x_seed >= ZONE_WIDTH) {
		x_seed = 2;
	}
	if (h_seed > 5) {
		h_seed = 2;
	}
}

void move_objects() {
	int map = 0;
	int skip[BANKS] = { //We can reuse the same group of objects for mulitple zones, but we need to know when that happens.
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
	};
	while (map < 2) {
		int b = 0;
		while (b < ZONES) {
			int z = bank[b][map];
			if (skip[z] == 0) {
				skip[z] = 1;
				if (z < 16) {
					if (play_width >= z * ZONE_WIDTH) {
						int i = 0;
						while (i < OBJECTS) {
							if (object[z][i][SKIN] == SKIN_TERMINATE) {
								//We have an empty skin, that means there will be no more objects in this run.
								break;
							} else {
								object[z][i][Y]++;
								seed();
								//if (y_seed > -1) {
								//	y_seed = -5;
								//}
								if (object[z][i][Y] > 30) {
									
									if (object[z][i][SKIN] == SKIN_TREE_RANDOM) {

										object[z][i][Y] = -1;
										object[z][i][X] = x_seed;
										if (h_seed > 5) {
											object[z][i][HEIGHT] = 3;
										} else if (h_seed == 5) {
											object[z][i][HEIGHT] = 2;
										} else {
											object[z][i][HEIGHT] = h_seed;
										}
									} else if (object[z][i][SKIN] == SKIN_BANK1) {
										bank[b][0] = object[z][i][HEIGHT];
									} else if (object[z][i][SKIN] == SKIN_BANK2) {
										bank[b][1] = object[z][i][HEIGHT];
									} else if (object[z][i][SKIN] == SKIN_WIDTH) {
										play_width_target = object[z][i][HEIGHT];
									} else if (object[z][i][SKIN] == SKIN_SCREEN) {
										screens(b, object[z][i][HEIGHT]);
									}

									
									
									
									//hide_cursor();
								}
								i++;
							}
						}
					}
				}
			}
			b++;
		}
		map++;
	}
}

void remove_objects() {
	
	
	int map = 0;
	
	while (map < 2) {
	
		int b = 0;
		while (b < ZONES) {
			int z = bank[b][map];
			if (z < 16) {
				int zw = b * ZONE_WIDTH;
				if (play_width >= zw) {
					int i = 0;
					while (i < OBJECTS) {
						if ((object[z][i][SKIN] == SKIN_TREE) || (object[z][i][SKIN] == SKIN_TREE_RANDOM)) {
							remove_tree(object[z][i][X] + zw, object[z][i][Y], object[z][i][HEIGHT]);
							if (object[z][i][Y] < SCREEN_HEIGHT && object[z][i][Y] > 1) {
								if (object[z][i][X] + zw < play_width && object[z][i][X] + zw > 1) {
									draw_tree_base(object[z][i][X] + zw, object[z][i][Y], object[z][i][HEIGHT]);
								}
							}
						}
						i++;
							
						
					}
				} else {
					break;
				}
			}
			b++;
		}
		map++;
	}
}

void draw_objects() {
	
	//int i = 0;
	//while (i < OBJECTS) {
	//	remove_tree(object[0][i][X], object[0][i][Y], object[0][i][HEIGHT]);
	//	i++;
	//}
	
	int z = 0;
	while (z < ZONES) {
		
		int zw = z * ZONE_WIDTH;
		if (play_width >= zw) {
	
	
			int i = 0;
			while (i > OBJECTS) {
				if ((object[0][i][SKIN] == SKIN_TREE) || (object[0][i][SKIN] == SKIN_TREE_RANDOM)) {
					//Only draw the tree if it is at the top.
					draw_tree(object[z][i][X] + zw, object[z][i][Y], object[z][i][4]);
					//draw_tree(5, 15, 3);
				}
				i++;
				//hide_cursor();
			}
		} else {
			break;
		}
		z++;
	}
	
	
}
	
void keyboard_skier(int key, int index) {		
	if (skier[index][STATUS] == 1) {
		if (key == skier[index][SKIER_KEY_LEFT]) {
			if (skier[index][X] > skier[index][LEFT]) {
				skier[index][NEXTDIRECTION] = 4;
			}
		} else if (key == skier[index][SKIER_KEY_RIGHT]) {
			if (skier[index][X] < skier[index][RIGHT]) {
				skier[index][NEXTDIRECTION] = 6;
			}
		} else if (key == skier[index][SKIER_KEY_UP]) {
			skier[index][NEXTDIRECTION] = 5;
		} else if (key == KEY_DOWN) {
			skier[index][NEXTDIRECTION] = 5;
		}
	} else if (skier[index][11] == 0) {
		if ((key == skier[index][SKIER_KEY_LEFT]) || (key == skier[index][SKIER_KEY_RIGHT]) || (key == skier[index][SKIER_KEY_UP])) {
			skier[index][11] = 1;
			skier[index][STATUS] = 3;
		}
	}
	
	
	
}
	
void keyboard_input() {
	if (kbhit()) {
		int key = getch();
		if (key == KEY_ESC) {
			//Kill game!
			quit_game++;
		} else if (key == KEY_ENTER) {
			//Move on from the title screen!
			quit_game = 1;
		} else if ((key == KEY_S) || (key == KEY_LS)) {
			//Toggle sound!
			if (play_sound == 1) {
				play_sound = 0;
			} else {
				play_sound = 1;
			}
		} else if (key == KEY_PLUS) {
			//Increase game speed.
			if (game_speed > 1) {
				game_speed /= 2;
			} else {
				game_speed = 1;
			}
		} else if (key == KEY_MINUS) {
			//Decrease game speed.
			if (game_speed < 65535) {
				
				game_speed *= 2;
			} else {
				game_speed = 65535;
			}
		} else {
			keyboard_skier(key, 0);
			keyboard_skier(key, 1);
			keyboard_skier(key, 2);
			keyboard_skier(key, 3);
			
		}
    }
}

void remove_skier(int player) {
    if (skier[player][Y] < SCREEN_HEIGHT) {
		int max_y1 = skier[player][Y] + 1;
		int max_y2 = skier[player][Y] + 2;
		if (skier[player][DIRECTION] == 6) {
			//Right
			if (collision[player][skier[player][X] - skier[player][LEFT] + 2] != 5) {
				if (skier[player][X]+1 < skier[player][RIGHT]) {
					draw_ascii_point(skier[player][X]+2, skier[player][Y], ' ');
				}
			}
			if (max_y1 < SCREEN_HEIGHT) {
				if (skier[player][X] < skier[player][RIGHT]) {
					draw_ascii_point(skier[player][X]+1, max_y1, ' ');
				}
			}
		} else if (skier[player][DIRECTION] == 4) {
			//Left
			if (skier[player][X]-1 >= skier[player][LEFT]) {
				if (max_y1 < SCREEN_HEIGHT) {
					draw_ascii_point(skier[player][X]-1, skier[player][Y]+1, ' ');
				}
				if (collision[player][skier[player][X] - skier[player][LEFT] - 2] != 5) {
					if (skier[player][X]-2 >= skier[player][LEFT]) {
						draw_ascii_point(skier[player][X]-2, skier[player][Y], ' ');
					}
				}
			}
			if (max_y1 < SCREEN_HEIGHT) {
				if (skier[player][X]-1 > skier[player][LEFT]) {
					draw_ascii_point(skier[player][X]-1, max_y1, ' ');
				}
			}
		} else if ((skier[player][DIRECTION] == 5) || (skier[player][DIRECTION] == 2) || (skier[player][DIRECTION] == 8)) {
			if (max_y1 < SCREEN_HEIGHT) {
				if (skier[player][X]-1 >= skier[player][LEFT]) {
					draw_ascii_point(skier[player][X]-1, max_y1, ' ');
				}
				if (skier[player][X]+1 <= skier[player][RIGHT]) {
					draw_ascii_point(skier[player][X]+1, max_y1, ' ');
				}
			}
		}
		if (collision[player][skier[player][X] - skier[player][LEFT]] != 5) {
			draw_ascii_point(skier[player][X], skier[player][Y], ' ');
			if (max_y1 < SCREEN_HEIGHT) {
				draw_ascii_point(skier[player][X], max_y1, ' ');
				if (max_y2 < SCREEN_HEIGHT) {
					draw_ascii_point(skier[player][X], max_y2, ' ');
				}
			}
		}
	}
}

void move_skier_inner(int player) {
	if ((skier[player][STATUS] == 2) || (skier[player][STATUS] == 4)) {
		if (skier[player][Y] < SCREEN_HEIGHT) {
			skier[player][Y]++;
		} else {
			if (skier[player][STATUS] == 2) {
				skier[player][STATUS] = 3;
			} else {
				skier[player][11] = 0; //Make skier inactive.
				skier[player][12] = 0; //Reset score.
			}
		}
	} else if (skier[player][STATUS] == 3) {
		if (skier[player][Y] > skier[player][14]) {
			skier[player][Y]--;
		} else {
			skier[player][STATUS] = 1;
		}
	} else {
		skier[player][DIRECTION] = skier[player][NEXTDIRECTION];
		if (skier[player][DIRECTION] == 2) {
			skier[player][NEXTDIRECTION] = 5;
		} else if (skier[player][DIRECTION] == 8) {
			skier[player][Y]--;
			skier[player][NEXTDIRECTION] = 5;
		} else if (skier[player][DIRECTION] == 4) {
			skier[player][X]--;
			if (skier[player][X] <= skier[player][LEFT]) {
				skier[player][NEXTDIRECTION] = 5;
			}
		} else if (skier[player][DIRECTION] == 6) {
			skier[player][X]++;
			if (skier[player][X] >= skier[player][RIGHT]) {
				skier[player][NEXTDIRECTION] = 5;
			}
		}
	}
}

void move_skier(int player) {
	move_skier_inner(player);
	//collision[player][skier[player][X]-skier[player][LEFT]] = player;
	
}

void move_screen_skier(int player) {
	if (skier[player][RIGHT] >= play_width) {
		skier[player][RIGHT] = play_width - 1;
		if (skier[player][X] >= play_width) {
			skier[player][X] = play_width - 1;
			skier[player][NEXTDIRECTION] = 5;
		}
	} else if (skier[player][RIGHT] <= play_width) {
		skier[player][RIGHT] = play_width + 1;
	}
}

void move_screen_visual() {
	if (play_width != play_width_target) {
		if (play_width > play_width_target) {
			draw_line(play_width, play_width, 2, 24, LIGHT_BLUE, LIGHT_BLUE);
		} else if (play_width < play_width_target) {
			draw_line(play_width, play_width, 2, 24, LIGHT_BLUE, BLACK);
		}
	}
}

void move_screen_logic() {
	
	if (play_width != play_width_target) {
		if (play_width > play_width_target) {
			play_width = play_width - 1;
		} else if (play_width < play_width_target) {
			play_width = play_width + 1;
		}
		
		move_screen_skier(0);
		move_screen_skier(1);
		move_screen_skier(2);
		move_screen_skier(3);
		
		
		draw_line(play_width, play_width, 2, 24, LIGHT_BLUE, LIGHT_BLUE);
	}
	


}

void screens(int b, int screen) {
	if (b < 16) {
		int z = bank[b][1];
	
		int i = 0;
		if (screen == 0) {
			//Random trees.
			while (i < OBJECTS) {
				object[z][i][X] = x_seed;
				object[z][i][Y] = y_seed - i * h_seed;
				object[z][i][SKIN] = SKIN_TREE_RANDOM;
				object[z][i][HEIGHT] = h_seed;
				seed();
				i++;
			}
		}
	}
}

int main() {
	

 

	
	
	//draw_ascii_point(5, 5, " ")
	//Draw hub...
	//hide_cursor();
	clear_screen(1, 1, 80, 80);	
	draw_line(1, 1, 2, 24, BLUE, BLUE);
	draw_line(SCREEN_WIDTH, SCREEN_WIDTH, 2, 24, LIGHT_BLUE, LIGHT_BLUE);
	draw_line(1, SCREEN_WIDTH, 1, 1, LIGHT_BLUE, LIGHT_BLUE);
	draw_line(1, SCREEN_WIDTH, 25, 25, LIGHT_BLUE, LIGHT_BLUE);

	

	while (1) {
		
		
		

		

		//draw_map(75, 4, RED, BLACK);
		play_level();
		
		
		
		break;
		//This is the main menu loop. It'll play a special level with just one skier.
		
		if (play_width != play_width_target) {
			move_screen_logic();
			remove_objects();
			move_objects();
			move_skier(0);
			move_screen_visual();
			delay_ms(30 - char_on_screen);
			char_on_screen = 0;
		} else {
			int animation = 0;
			int center = 55;
			int top = 3;
			int spacing = 2;
			int hovered = -1;
			
			
			while (1) {
				if (animation == spacing * 0) {
					draw_text(55, top+(spacing*0), "SKIING 2", 1, RED, BLUE);
				} else if (animation == spacing * 1) {
					draw_text(55, top+(spacing*1), "THE SHINING ROAD", 1, YELLOW, LIGHT_BLUE);
				} else if (animation == spacing * 3) {
					draw_text(55, top+(spacing*3), "DESCEND THE FROZEN MOUNTAIN", 1, LIGHT_GRAY, BLUE);
					draw_text(54, top+(spacing*3), "FROZEN", 0, LIGHT_BLUE, BLUE);
				} else if (animation == spacing * 2) {
					draw_text(55, top+(spacing*2), "LEAVE THE ASHES OF THE CITY", 1, LIGHT_GRAY, BLUE);
					draw_text(52, top+(spacing*2), "ASHES", 0, RED, BLUE);
				} else if (animation == spacing * 5) {
					draw_text(55, top+(spacing*5), "TO THE GATE OF SILENCE", 1, LIGHT_GRAY, BLUE);
				} else if (animation == spacing * 4) {
					draw_text(55, top+(spacing*4), "JOURNEY THROUGH THE SHADOW", 1, LIGHT_GRAY, BLUE);
				} else if (animation == spacing * 7) {
					draw_text(55, top+(spacing*7), "EXPEDITION", 1, LIGHT_GRAY, RED);
				} else if (animation == spacing * 8) {
					draw_text(55, top+(spacing*8), "COURSES", 1, LIGHT_GRAY, RED);
				} else if (animation == spacing * 9) {
					draw_text(55, top+(spacing*9), "SETTINGS", 1, LIGHT_GRAY, RED);
				} else if (animation == spacing * 10) {
					draw_text(55, top+(spacing*10), "QUIT", 1, LIGHT_GRAY, RED);
				} else if (animation == spacing * 11) {


				}
				
				//EXPEDITION, COURSE, SETTINGS, QUIT
				
				//SELECT SKIERS
				
				//Ski!
				//Expedition
				//Course
				//Skier: 
				//Hall of Fame
				//Settings
				
				clear_collision();
				remove_objects();
				move_objects();
				move_skier(0);
				hit_collision(0);
				if (animation < 100) {
					animation++;
				}
			}

		}
		
		

		
		
	}

	while (1) {
		break;
		clear_collision();

		//The screen flicker is no good.
		//Draw black line behind.
		//clear_screen(2, 29, 2, 24);
		//Draw the objects!
		

		//move_skier(1);
		//draw_objects();
		
		move_screen_logic();

		
		remove_objects();
		
		

		
		
		move_objects();


		

		move_skier(0);
		move_skier(1);
		move_skier(2);
		move_skier(3);

		
		//draw_collision();
		hit_collision(0);
		hit_collision(1);
		hit_collision(2);
		hit_collision(3);

		//TODO: Count the number of objects on the screen and set the delay based on that.
		
		
		
		//play_next_note(1);
		//delay_ms(30 - char_on_screen);
		
		move_screen_visual();
		
		delay_ms(30 - char_on_screen);
		char_on_screen = 0;
	}
	
	
	while (1) {
		break;
		music_delay(2);
		play_next_note(1);
	}
	
	while (quit_game < 10) {
		
		//int players = 2;
		//int progress = 0; //How far have we travelled? We can start in the middle of a level.
		//players, progress, pattern
		
		
		
		//draw_map(75, 4, RED, BLACK);
		play_level();

	}
	
	
	draw_line(1, SCREEN_WIDTH, 1, SCREEN_HEIGHT, YELLOW, BLACK);
	printf("Thanks for playing SKIING 2: THE SHINING ROAD 1.0!\n");
	
	//Cyan
	if (skier[0][11] == 1) {
		printf("CYAN SKIER scored %d!\n", skier[0][12]);
	}
	//Light Red
	if (skier[1][11] == 1) {
		printf("RED SKIER scored %d!\n", skier[1][12]);
	}
	//Light Blue
	if (skier[2][11] == 1) {
		printf("BLUE SKIER scored %d!\n", skier[2][12]);
	}
	//Magenta
	if (skier[3][11] == 1) {
		printf("MAGENTA SKIER scored %d!\n", skier[3][12]);
	}
	printf("This has been a Friends with Skelefits production.\n");
	printf("We made this game for the 40th anniversary of SKIING (1984) by RICK DEAN.\n");
	//draw_line(1, SCREEN_WIDTH, 4, SCREEN_HEIGHT, LIGHT_GRAY, BLACK);
    return 0;
}

void draw_man(int x, int y, int action, int colour) {

	int max_y1 = y - 1;
	int max_y2 = y - 2;
	int max_y3 = y - 3;
	
	if (y > 1) {

		if ((max_y3 > 1) && (max_y3 < SCREEN_HEIGHT)) {
			draw_ascii_line(x-1, x+1, max_y3, max_y3, ' ', colour);
		}
		if ((max_y2 > 1) && (max_y2 < SCREEN_HEIGHT)) {
			draw_ascii_point_colour(x-1, max_y2, ' ', colour, BLACK);
			draw_ascii_point_colour(x+1, max_y2, ' ', colour, BLACK);
			
			draw_ascii_point_colour(x, max_y2, 'O', colour, BLACK);
			if (action == 1) {
				draw_ascii_point_colour(x + 1, max_y2, '/', colour, BLACK);
			} else if (action == 2) {
				draw_ascii_point_colour(x - 1, max_y2, '\\', colour, BLACK);
				draw_ascii_point_colour(x + 1, max_y2, '/', colour, BLACK);
			} else if (action == 3) {
				draw_ascii_point_colour(x - 1, max_y2, '\\', colour, BLACK);
			}
				
			
		}
			
		if ((max_y1 > 1) && (max_y1 < SCREEN_HEIGHT)) {
			draw_ascii_point_colour(x-1, max_y1, ' ', colour, BLACK);
			draw_ascii_point_colour(x+1, max_y1, ' ', colour, BLACK);
			if (action == 0) {
				draw_ascii_point_colour(x - 1, max_y1, '/', colour, BLACK);
				draw_ascii_point_colour(x + 1, max_y1, '\\', colour, BLACK);
			} else if (action == 1) {
				draw_ascii_point_colour(x - 1, max_y1, '/', colour, BLACK);

			} else if (action == 3) {
				draw_ascii_point_colour(x + 1, max_y1, '\\', colour, BLACK);
			}
			draw_ascii_point_colour(x, max_y1, '|', colour, BLACK);

		}
		if (y < SCREEN_HEIGHT) {
			draw_ascii_point_colour(x - 1, y, '/', colour, BLACK);
			draw_ascii_point_colour(x + 1, y, '\\', colour, BLACK);
		}
	}

}

void course_man(int x, int action, int colour) {
	draw_man(x, play_row, action, colour);
}

void course_man_mirror(int x, int colour) {
	draw_man(x, play_row, 0, colour);
	draw_man(play_width - x + 1, play_row, 0, colour);
}

void course_tree_slow(int x, int y, int height, int calcline) {
	//Basex must be above 1, but since maps are hard coded we wont bother checking.
	if (calcline == y) {
		remove_tree(x, play_row, height);
		if (play_row < SCREEN_HEIGHT) {
			draw_tree_base(x, play_row, height);
			char_on_screen++;
		}
	}
}

void course_tree_quick(int x) {
	if (x > 1) {
		remove_tree(x, play_row, 3);
		if (play_row < SCREEN_HEIGHT) {
			draw_tree_base(x, play_row, 3);
			char_on_screen++;
		}
	}
}

void course_tree_mirror(int x, int height) {
	course_tree(x, height);
	course_tree(play_width - x + 1, height);
}

void course_tree(int x, int height) {
	if (x > 1) {
		remove_tree(x, play_row, height);
		if (play_row < SCREEN_HEIGHT) {
			draw_tree_base(x, play_row, height);
			char_on_screen++;
		}
	}
}

void draw_flag(int x, int symbol) {
	int colour = YELLOW;
	int remove_row = play_row - 1;
	//The flag colour should change based on what level we are on.
	if (play_course < 3) {
		colour = RED;
	} else if (play_course < 5) {
		colour = BROWN;
	} else if (play_course < 7) { 
		colour = YELLOW;
	} else if (play_course < 9) {
		colour = LIGHT_BLUE;
	} else if (play_course < 11) {
		colour = MAGENTA;
	} else if (play_course < 13) {
		colour = CYAN;
	} else if (play_course < 15) {
		colour = DARK_GRAY;
	} else if (play_course < 17) {
		colour = GREEN;
	} else if (play_course < 19) {
		colour = LIGHT_GRAY;
	} else if (play_course < 21) {
		colour = WHITE;
	} else if (play_course < 22) {
		colour = LIGHT_GREEN;
	} else {
		colour = GREEN; 
	}
	if ((x > 1) && (x < play_width)) {
		if ((remove_row > 1) && (remove_row < SCREEN_HEIGHT)) {
			draw_ascii_point(x, remove_row, ' ');
		}
		if ((play_row > 1) && (play_row < SCREEN_HEIGHT)) {
			draw_ascii_point_colour(x, play_row, symbol, colour, BLACK);
		}
		char_on_screen++;
	}
	
}

void course_special(int x, int gap, int type, int symbol) {
	//6 = 1 Point Flag
	//7 = Next Level Flag
	int xl = x-gap;
	int xr = x+gap;
	draw_flag(xl, symbol);
	draw_flag(xr, symbol);
	write_collision(xl, xr, play_row, type);
}

void course_flag(int x, int gap) {
	int xl = x - gap;
	int xr = x + gap;
	draw_flag(xl, 80); 
	draw_flag(xr, 80);
	write_collision(xl, xr, play_row, 6);
}

//void counter_cheese() {
//	int i = 0;
//	while (i < 4) {
//		if (skier[i][0] > play_width - 2) {
//			play_shrink--;
//		}
//		i++;
//	}
//	if (play_shrink < 1) {
//		play_shrink = 10;
//		play_width_target--;
//	}		
//}

#include "course_title_screen.c"
#include "course_city_of_frostbite.c"
#include "course_despondent_riparian.c"
#include "course_chamber_of_vitality.c"
#include "course_charging_grounds.c"
#include "course_lightfall_terminal.c"
#include "course_crafting_court.c"
#include "course_valley_of_death.c"
#include "course_vanity_fair.c"
#include "course_catacombs_of_despair.c"
#include "course_endless_forest.c"
#include "course_heavenly_highlands.c"
#include "course_tower_of_light.c"


#include "course_pine_valley.c"
#include "course_laggy.c"

void write_line_to_screen(int line, unsigned int start_x, unsigned int start_y) {
    int x = start_x;
    if (line == 0) {
        draw_ascii_point_colour(x, start_y, '0', YELLOW, RED);
        return;
    }
    while (line > 0) {
        int digit = line % 10;
        char symbol = '0' + digit;
        draw_ascii_point_colour(x, start_y, symbol, YELLOW, RED);
        x--;

        line /= 10;
    }
}

void draw_pattern() {
		//I want skiers on this one!
	if (debug == 1) {
		
		write_line_to_screen(game_speed, 4, 5);
		write_line_to_screen(play_progress, 4, 4);
	}
	if (play_course == 0) {
		//Let s work, not just S for sound!
		course_title_screen();
	} else if (play_course == 1) {
		//done
		course_city_of_frostbite();
	} else if (play_course == 2) {
		//done
		course_traveled_path();
	} else if (play_course == 3) {
		//done
		course_despondent_riparian();
	} else if (play_course == 4) {
		//done
		course_dimming_way();
	} else if (play_course == 5) {
		//done
		course_chamber_of_vitality();
		//The light is given to the skiers so they no longer need the burdonous battery.
		//The skier is informed that they'll have to recharge the light. The skiers keep their burderns.
		//The light is a lesser light, that depends on the greater light that illumiates the City.
	} else if (play_course == 6) {
		//done
		//The skiers are told they no longer need the burdonous battery. The light is all they need.
		course_circuit_walk();
	} else if (play_course == 7) {
		//done
		course_the_charging_grounds();
		//They learn about the new light.
		//You wont need that battery when your light gets energized.
	} else if (play_course == 8) {
		//done
		course_the_burdened_way();
	} else if (play_course == 9) {
		//done
		course_lightfall_terminal();
		//Their light is fully charged.
		//The skiers are informed that if they ever lose their light, they should return to A Lightfall Terminal.
		//The energy provided from the terminals is essential to make the journey and the enter the City.
	} else if (play_course == 10) {
		//cancelled
		course_energy_sepulchre();
		//course_endless_maze();
		//The skiers go through a neverending hedge maze.
		//If the player doesn't go through the flags, they repeat that section.
	} else if (play_course == 11) {
		//cancelled
		course_energy_sepulchre();
		//course_crafting_court();
		//If you didn't drop your battery going up that hill, you can now.
		//All your equipment uses your new light.
	} else if (play_course == 12) {
		//done
		course_energy_sepulchre();
		//The warmth of their new clothes, powered by their light makes the skiers feel safe enough to drop their old batteries.
	} else if ((play_course == 13) || (play_course == 14)) {
		//done
		course_valley_of_death();
		//Valley of Humiliation
		//Valley of the Shadow of Death
	} else if (play_course == 15) {
		course_catacombs_of_despair();
		//cancelled
		//course_vanity_fair();
		//Skiers arrive at a trading town.
		//When the marketeers learn that the skiers threw away their batteries they think them rich.
		//However, the skiers refuse their wares.
		//The sellers get upset, thinking the skiers are arragent to not want to replace their clothes.
		//Smaller batteries are offered, but the skiers refuse because their light is strong.
		//Branching path to either doubting castle or enchanted ground. 16 or 19
	} else if (play_course == 16) {
		course_catacombs_of_despair();
		//cancelled
		//course_corridors_of_comfort();
	} else if (play_course == 17) {
		course_rising_from_the_depths();
		//cancelled
		//course_endless_forest();
	} else if (play_course == 18) {
		course_rising_from_the_depths();
		//cancelled
		//course_path_of_renewal();
		//Go to course 19.			
	} else if (play_course == 26) {
		//course_descent_of_doubt();
		//This leads to catacombs.
		
		
	} else if (play_course == 27) {
		//done
		course_catacombs_of_despair();
	} else if (play_course == 28) {
		//done
		course_rising_from_the_depths();
		//Go to course 19.
		
		
		

		
	} else if (play_course == 19) {
		//done
		course_heavenly_highlands();
	} else if (play_course == 20) {
		//done
		course_rivers_of_death();
	} else if (play_course == 21) {
		play_course = 20;
	} else if (play_course == 22) {
		course_pine_valley();
	} else if (play_course == 23) {
		course_laggy();
	} else if (play_course == 31) {
		course_tower_of_light();
	}
	
	
}//Boss fight goes here!


void play_level() {
	while (quit_game < 10) {
		int i = 0;
		int order = 0;
		play_row = SCREEN_HEIGHT + 5; //5 is max object size
		clear_collision();
		move_screen_logic();
		while (play_row > 1) {
			draw_pattern();
			play_row--;
		}
		nosound();
		while (i < 4) {
			if (skier[i][11] > 0) {
				order = order + hit_collision(i);
				remove_skier(i);
				move_skier(i);
				draw_skier(i);
			}
			i++;
		}
		move_screen_visual();
		if (order > 0) {
			order_skiers();
		}
		//draw_collision();
		
		i = 0;
		while (i < game_speed) {
			if (game_speed > 4) {
				delay_ms(12);
			} else {
				delay_ms(12 - char_on_screen);
			}
			
			i++;
		}
		char_on_screen = 0;
		play_progress++;
	}
}



void music_delay(int time) {
    unsigned int i;
	if (time > 0) {
		for (i = 0; i < time * 200; i++) {
		}
	}
}

#define MAX_NOTES 4

enum Notes {
	R = 0,
    C4 = 262,
    CS4 = 277, //C#4
    D4 = 294,
    DS4 = 311, //D#4
    E4 = 330,
    F4 = 349,
    FS4 = 370, //F#4
    G4 = 392,
    GS4 = 415, //G#4
    A4 = 440,
    AS4 = 466, //A#4
    B4 = 494,
    C5 = 523,
    CS5 = 554, //C#5
    D5 = 587,
    DS5 = 622, //D#5
    E5 = 659,
    F5 = 698,
    FS5 = 740, //F#5
    G5 = 784,
    GS5 = 830, //G#5
    A5 = 880,
    AS5 = 932, //A#5
    B5 = 988  //B5
};

enum Rhythm {
	WHOLE = 16,
	DOTTED_HALF = 8,
    HALF = 4,
    QUARTER = 2,
    EIGHTH = 1,
};

int measure = 0;
int measure_note = 0;
int measure_notes = 4;
int measure_beats = QUARTER;
int measure_quick = 16;
int measure_step = 0;

void play_next_note(int song) {
		int song_notes[21][MAX_NOTES] = {
			//A Little Night Music - Wolfgang Amadeus Mozart
			{ R },
			{ C5, G4 }, 
			{ C5, G4 },
			{ C5, G4, C5, E5 },
			{ G5, R },
			{ F5, D5 },
			{ F5, D5 },
			{ F5, D5, R, D5 },
			{ G4, R },
			{ C5, C5 },
			{ R, E5, D5, C5 },
			{ C5, B4, B4 },
			{ R, D5, F5, B4 },
			{ D5, C5, C5 },
			{ R, E5, D5, C5 },
			{ C5, B4, B4 },
			{ R, D5, F5, B4 },
			{ C5, G4 },
			{ C5, G4 },
			{ C5, G4, C5, E5 },
			{ C5 },
		};
		int note_time[21][MAX_NOTES] = {
			{ WHOLE },
			{ DOTTED_HALF, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ HALF, HALF },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ QUARTER, QUARTER, HALF },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ QUARTER, QUARTER, HALF },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ QUARTER, QUARTER, HALF },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ DOTTED_HALF, QUARTER },
			{ QUARTER, QUARTER, QUARTER, QUARTER },
			{ WHOLE },
		};

    static int song_lengths = 21;

    if (measure < song_lengths) {
        if (measure_step >= note_time[measure][measure_note]) {
            nosound();
            measure_note++;
            if (measure_note >= MAX_NOTES || measure_note >= sizeof(note_time[measure]) / sizeof(note_time[measure][0])) {
                measure_note = 0;
                measure++;
            }
            if (measure < song_lengths && measure_note < MAX_NOTES) {
                sound(song_notes[measure][measure_note]);
            }
            measure_step = 0; 
        } else {
            measure_step++;
        }
    } else {
        nosound();
        measure = 0;
        measure_note = 0;
    }
}
