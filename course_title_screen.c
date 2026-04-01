

void course_title_screen() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
	int top = 10;
	
	if (quit_game > 0) {

		
		
		//next_course();
		
		if (play_course_next != 68) {
			
			int si = 0;
			while (si < 4) {
				skier[si][STATUS] = 4; //Retire all skiers!
				
				skier[si][DIRECTION] = 5;
				
				//draw_line(25, 56, 1, SCREEN_HEIGHT, LIGHT_BLUE, LIGHT_BLUE);
				si++;
			}
			
			play_course_next = 68;
			play_progress = 200;
		}
		
		
		//
	}

	
	if ((play_progress < 100) && (play_course_next != 50)) {
		play_course_next = 2;
		
		if (play_progress == 0) {
			unsigned int pi = 0;
			draw_line(25, 56, 1, SCREEN_HEIGHT, LIGHT_BLUE, LIGHT_BLUE);
			
			skier[0][Y] = 18;
			skier[2][Y] = 18;
			
			skier[3][Y] = 11;
			skier[1][Y] = 11;
			
			while (pi < 2) {
				int pu = pi + 2;	
				
				//Skiers on left.
				skier[pi][X] = 13;
				skier[pi][LEFT] = 2;
				skier[pi][RIGHT] = 24;
				skier[pi][11] = 1; //Activate skier!
				skier[pi][DIRECTION] = 6;
				draw_skier(pi);
				draw_controls(pi);
				
				//Skiers on right.
				
				skier[pu][X] = 68;
				skier[pu][LEFT] = 57;
				skier[pu][RIGHT] = 79;
				skier[pu][11] = 1; //Activate skier!
				skier[pu][DIRECTION] = 4;
				draw_skier(pu);
				draw_controls(pu);
				
				pi++;
			}

			
			draw_text(skier[3][X], skier[3][Y] - 8, "THE SHINING ROAD", 1, YELLOW, BLACK); 
			draw_text(skier[3][X], skier[3][Y] - 6, "GAME SPEED", 1, BROWN, BLACK); 
			draw_text(skier[3][X], skier[3][Y] - 5, "-/+", 1, BROWN, BLACK);

			draw_text(skier[1][X], skier[1][Y] - 8, "SKIING 2", 1, YELLOW, BLACK); 
			draw_text(skier[1][X], skier[1][Y] - 6, "START GAME", 1, BROWN, BLACK); 
			draw_text(skier[1][X], skier[1][Y] - 5, "ENTER ", 1, BROWN, BLACK);
					
			draw_text(skier[1][X], skier[1][Y] - 3, "END GAME", 1, BROWN, BLACK); 
			draw_text(skier[1][X], skier[1][Y] - 2, "ESC", 1, BROWN, BLACK); 
					
			draw_text(skier[3][X], skier[3][Y] - 3, "TOGGLE SOUND", 1, BROWN, BLACK); 
			draw_text(skier[3][X], skier[3][Y] - 2, "S", 1, BROWN, BLACK); 
			
			
			
		}
		
		
		
		switch (play_progress) {
			
			
			
			case 40: play_course_next = 50; break;
			


			//case 8: draw_text(40, top+(play_course_next*7), "JOURNEY THROUGH THE SHADOW", 1, LIGHT_GRAY, BLUE); break;
			//case 7: draw_text(40, top+(play_course_next*6), "TO THE GATE OF SILENCE", 1, LIGHT_GRAY, BLUE); break;
			//case 6: draw_text(40, top+(play_course_next*5), "LEAVE THE ASHES OF THE CITY", 1, LIGHT_GRAY, BLUE); draw_text(37, top+(play_course_next*5), "ASHES", 0, RED, BLUE); break;
			//case 5: draw_text(40, top+(play_course_next*4), "DESCEND THE FROZEN MOUNTAIN", 1, LIGHT_GRAY, BLUE); draw_text(39, top+(play_course_next*4), "FROZEN", 0, LIGHT_BLUE, BLUE); break;
			case 6: draw_text(41, top+(play_course_next*3), " THE SHINING ROAD", 1, YELLOW, BLACK); break;
			case 5: draw_text(41, top+(play_course_next*2), "SKIING 2", 1, GREEN, BLACK); break;
			case 4: draw_text(41, top+(play_course_next*1), "PRESENTS", 1, DARK_GRAY, BLACK); break;
			case 3: draw_text(41, top+(play_course_next*0), "FRIENDS WITH SKELEFITS", 1, MAGENTA, BLACK); break;
			case 2: draw_line(28, 53, top-1, top+7, BLACK, RED); 
				draw_line(28, 53, top-2, top-2, BLACK, BLACK);
				draw_line(28, 53, top+8, top+8, BLACK, BLACK);
			break;
		}
	
	}
	
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: play_progress = 0; break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 275: next_course(); draw_map(75, 4, RED, BLACK); break;
			case 265: play_width_target = 72; 
				skier[0][X] = 11;
				skier[1][X] = 31;
				skier[2][X] = 41;
				skier[3][X] = 61;
				skier[0][LEFT] = 2;
				skier[0][RIGHT] = play_width;
				skier[1][LEFT] = 2;
				skier[1][RIGHT] = play_width;
				skier[2][LEFT] = 2;
				skier[2][RIGHT] = play_width;
				skier[3][LEFT] = 2;
				skier[3][RIGHT] = play_width;
			break;
			case 240: course_tree_mirror(38, 3); break;
			case 238: course_tree_mirror(35, 3); break;
			case 236: course_tree_mirror(32, 3); break;
			case 234: course_tree_mirror(27, 3); break;
			case 230: course_tree_mirror(22, 3); break;
			case 229: course_tree_mirror(18, 3); break;
			case 228: course_tree_mirror(14, 3); break;
			case 227: course_tree_mirror(10, 3); break;
			case 226: course_tree_mirror(6, 3); break;
			case 225: course_tree_mirror(2, 3); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			
		}
		
	} else if ((line > 0) && (line < 100)) {
		
        switch (line) {
			case 75: play_progress = 1; break;
		}
	}
}
