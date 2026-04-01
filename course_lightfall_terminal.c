void course_endless_maze() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: draw_text(61, 2, "            ", 1, RED, hud_colour); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 50: draw_text(61, 2, "ENDLESS MAZE", 1, RED, hud_colour); break;
			case 1: play_width_target = 50; break;
		}
	}
}

void course_lightfall_terminal() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	
	if (play_row == 20) {
		switch (play_progress) {
			//case 450: hide_title(); break;
			
			case 250: play_progress = 458; 
			
			case 240: draw_text(37, 17, "                                                                ", 1, YELLOW, BLACK); break;
				
			case 220: draw_text(37, 15, "                                           ", 1, WHITE, BLACK); break;
				
			case 200: draw_text(37, 13, "                                                   ", 1, WHITE, BLACK); break;
				
			case 180: draw_text(37, 11, "                                ", 1, WHITE, BLACK); break;
				
			case 160: draw_text(37, 9, "              ", 1, YELLOW, BLACK); break;
				
			case 140: draw_man(37, 7, 0, YELLOW); draw_text(37, 17, "YOU WILL NOT NEED THAT HEAVY BATTERY PACK FROM THE CITY ANYMORE.", 1, YELLOW, BLACK); break;
				
			case 120: draw_man(37, 7, 2, YELLOW); draw_text(37, 15, "THE LIGHT IS PROJECTED HERE FROM THE TOWER.", 1, YELLOW, BLACK); break;
				
			case 100: draw_text(37, 13, "IN THIS CLEARING YOU CAN BASK IN THE GREATER LIGHT.", 1, YELLOW, BLACK); break;
				
			case 80: draw_man(37, 7, 0, YELLOW); draw_text(37, 11, "I AM GLAD YOU HAVE NOT GIVEN UP.", 1, YELLOW, BLACK); break;
				
			case 60: draw_man(37, 7, 1, YELLOW); draw_text(37, 9, "WE MEET AGAIN!", 1, YELLOW, BLACK); break;

			case 50: 
				nosound();
				//draw_title(60, "CHAMBER OF LIGHT");

			break;

			case 1: play_width_target = 72; break;
		}
	}
    switch (line) {
		case 501: next_course(); break;
		case 474: course_tree_mirror(2, 3); course_tree_mirror(8, 3); break;
		case 472: course_tree_mirror(12, 3); break;
		case 470: course_tree_quick(6); break;
		case 466: course_tree_quick(2); break;
		case 475: course_man(37, 0, YELLOW); break;
		case 40: play_progress = 50; break;
		case 34: course_tree_mirror(2, 3); course_tree_mirror(8, 3); break;
		case 32: course_tree_mirror(12, 3); break;
		case 30: course_tree_quick(6); break;
		case 26: course_tree_quick(2); break;
		case 35: course_man(37, 0, YELLOW); break;
	}
}