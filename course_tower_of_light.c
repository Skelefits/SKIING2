void course_tower_of_light() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	
	if (play_row == 20) {
		switch (play_progress) {
			//case 450: hide_title(); break;
			
			case 120: getch(); quit_game = 10; break;
				
			case 100: draw_man(36, 7, 2, RED); draw_text(36, 13, "COME ON IN!", 1, RED, BLACK); break;
				
			case 80: draw_man(36, 7, 0, RED); draw_text(36, 11, "I AM THE LORD OF THE CELESTIAL TOWER!", 1, RED, BLACK); break;
				
			case 60: draw_man(36, 7, 1, RED); draw_text(36, 9, "GREETINGS EVERYONE!", 1, RED, BLACK); break;

			case 50: 
				nosound();
				//draw_title(60, "CHAMBER OF LIGHT");

			break;

			case 1: play_width_target = 72; break;
		}
	}
    switch (line) {
		case 40: play_progress = 50; break;
		case 38: course_man_mirror(8, LIGHT_CYAN); break;
		case 36: course_man_mirror(5, LIGHT_MAGENTA); break;
		case 32: course_man_mirror(3, LIGHT_RED); break;


		
	
		case 35: course_man(36, 0, RED); break;
		
		//case 25: course_man_mirror(5, LIGHT_GRAY); course_man(8, 0, LIGHT_MAGENTA); course_man(33, 0, DARK_GRAY); course_man(37, 0, LIGHT_GREEN); course_man(42, 0, LIGHT_CYAN);
	}
}