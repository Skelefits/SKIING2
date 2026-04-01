void course_city_of_frostbite() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	
	if (play_row == 20) {
		switch (play_progress) {
				
			case 420: play_progress = 458; draw_text(36, 13, "                                              ", 1, YELLOW, BLACK); break;
				
			case 400: draw_text(36, 11, "                                    ", 1, YELLOW, BLACK); break;
				
			case 380: draw_man(36, 7, 0, YELLOW); draw_text(36, 9, "                        ", 1, YELLOW, BLACK); break;
				
			case 360: draw_man(36, 7, 2, YELLOW); draw_text(36, 13, "YOU MUST RECEIVE THE LIGHT TO ENTER THE TOWER.", 1, YELLOW, BLACK); break;
				
			case 340: draw_man(36, 7, 3, YELLOW); draw_text(36, 11, "YOU WILL REACH THE CHAMBER OF LIGHT.", 1, YELLOW, BLACK); draw_text(36, 13, "                      ", 1, YELLOW, BLACK); break;
				
			case 320: draw_man(36, 7, 1, YELLOW); draw_text(36, 9, "FOLLOW THE SHINING ROAD.", 1, YELLOW, BLACK); draw_text(36, 11, "                                     ", 1, YELLOW, BLACK); break;
				
			case 300: draw_text(36, 9, "                                ", 1, YELLOW, BLACK); break;
			
			case 260:
				if ((skier[0][11] == 1) || (skier[1][11] == 1) || (skier[2][11] == 1) || (skier[3][11] == 1)) {
					play_progress = 299;
				} else {
					play_progress = 250;
				}
			break;
				
			case 240: draw_man(36, 7, 0, YELLOW); draw_text(36, 17, "                              ", 1, YELLOW, BLACK); break;
				
			case 220: draw_man(36, 7, 2, YELLOW); draw_text(36, 13, "WHO WILL HEAR MY CRY?", 1, YELLOW, BLACK); draw_text(36, 15, "                                     ", 1, YELLOW, BLACK); break;
				
			case 200: draw_man(36, 7, 3, YELLOW); draw_text(36, 11, "SAFETY AWAITS AT THE CELESTIAL TOWER.", 1, YELLOW, BLACK); draw_text(36, 13, "                     ", 1, YELLOW, BLACK); break;
				
			case 180: draw_text(36, 9, "MY LORD OFFERS SANCTUARY TO ALL!", 1, YELLOW, BLACK); draw_text(36, 11, "                             ", 1, YELLOW, BLACK); break;
				
			case 160: draw_man(36, 7, 0, YELLOW); draw_text(36, 9, "        ", 1, YELLOW, BLACK); break;
				
			case 140: draw_man(36, 7, 2, YELLOW); draw_text(36, 17, "THE MOUNTAIN WILL BE ENGULFED!", 1, YELLOW, BLACK); break;
				
			case 120: draw_text(36, 15, "FIRE WILL SPEW FORTH FROM THE GROUND!", 1, YELLOW, BLACK); break;
				
			case 100: draw_man(36, 7, 0, YELLOW); draw_text(36, 13, "IT WILL BE YOUR TOMB!", 1, YELLOW, BLACK); break;
				
			case 80: draw_man(36, 7, 2, YELLOW); draw_text(36, 11, "COME OUT OF THIS FROZEN CITY!", 1, YELLOW, BLACK); break;
				
			case 60: draw_man(36, 7, 1, YELLOW); draw_text(36, 9, "HEAR ME!", 1, YELLOW, BLACK); break;

			case 1: play_width_target = 71; break;
		}
	}
    switch (line) {
		case 501: next_course(); break;
		case 474: course_tree_mirror(8, 3); break;
		case 472: course_tree_mirror(10, 3); break;
		case 470: course_tree_quick(5); break;
		case 466: course_tree_quick(2); break;
		case 475: course_man(36, 0, YELLOW); break;
		//case 80: draw_title(61, "CITY OF FROSTBITE"); break;
		case 40: play_progress = 50; break;
		case 34: course_tree_mirror(8, 3); break;
		case 32: course_tree_mirror(10, 3); break;
		case 30: course_tree_quick(5); break;
		case 26: course_tree_quick(2); break;
		case 35: course_man(36, 0, YELLOW); break;
	}
}

void course_traveled_path() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	if (play_row == 20) {
		switch (play_progress) {
			case 450: hide_title(); break;
			
							//A HIDDEN BUT TRAVELED PATH"
					
			case 50: 
				nosound();
				draw_title(59, "A HIDDEN BUT TRAVELED PATH");
				draw_text(59, 4, "LEAVING THE WARMTH", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 5, "OF THE CITY CAN BE", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 6, "DEADLY FOR THE", 1, LIGHT_GRAY, hud_colour);	
				draw_text(59, 7, "UNPREPARED", 1, LIGHT_GRAY, hud_colour);
					
				draw_text(59, 9, "BURDENSOME BATTERY", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 10, "PACKS ARE NECESSARY", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 11, "TO KEEP A TRAVELER'S", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 12, "THERMAL SUIT WARM", 1, LIGHT_GRAY, hud_colour);
					
				draw_text(59, 14, "THE EVANGELIST PREACHES", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 15, "OF A CELESTIAL TOWER", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 16, "BEYOND THE SHADOW OF", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 17, "THE CITY'S MOUNTAIN", 1, LIGHT_GRAY, hud_colour);
					
				draw_text(59, 19, "BEYOND THE RANGE OF", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 20, "CITY BATTERIES", 1, LIGHT_GRAY, hud_colour);
					
				draw_text(59, 22, "THE SHINING ROAD", 1, LIGHT_GRAY, hud_colour);
				draw_text(59, 23, "LEADS TO THE LIGHT", 1, LIGHT_GRAY, hud_colour);
			break;
			
			case 1: play_width_target = 45; break;
		}
	}
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 525: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: course_flag(24, 2); break;
			case 495: course_tree_mirror(16, 3); break;
			case 483: course_tree_mirror(6, 4); break;
			case 482: course_tree_mirror(11, 3); break;
			case 479: course_tree_mirror(6, 3); break;
			case 478: course_tree_quick(14); break;
			case 477: course_tree_quick(30); break;
			case 467: course_tree_mirror(11, 3); break;
			case 460: course_tree_mirror(16, 3); break;
			case 448: course_tree_mirror(6, 3); course_tree_mirror(17, 3); break;
			case 445: course_tree_mirror(8, 3); break;
			case 444: course_tree_mirror(15, 3); break;
			case 431: course_tree_mirror(20, 3); break;
			case 427: course_tree_mirror(17, 3); break;
			case 420: course_tree_mirror(8, 3); break;
			case 413: course_tree_mirror(17, 3); break;
			case 409: course_tree_mirror(6, 3); break;
			case 402: course_tree_mirror(19, 3); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 399: course_flag(23, 2); break;
			case 398: course_tree_mirror(17, 3); break;
			case 395: course_tree_mirror(23, 3); break;
			case 389: course_tree_mirror(8, 3); break;
			case 376: course_tree_mirror(8, 3); break;
			case 375: course_tree_mirror(15, 3); break;
			case 374: course_tree_quick(23); break;
			case 361: course_tree_mirror(17, 3); break;
			case 354: course_tree_mirror(5, 3); break;
			case 347: course_tree_quick(30); break;
			case 344: course_tree_mirror(20, 3); break;
			case 343: course_tree_mirror(5, 3); break;
			case 341: course_tree_mirror(12, 3); break;
			case 334: course_tree_quick(10); break;
			case 332: course_tree_mirror(19, 3); break;
			case 327: course_tree_mirror(15, 3); break;
			case 323: course_tree_mirror(7, 3); break;
			case 317: course_tree_mirror(19, 3); break;
			case 312: course_tree_mirror(9, 3); break;
			case 310: course_tree_quick(30); break;
			case 307: course_tree_mirror(16, 3); break;
			case 304: course_tree_mirror(18, 3); break;
			case 303: course_tree_mirror(9, 3); break;
			case 301: course_tree_mirror(20, 3); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 299: course_flag(11, 2), course_tree_quick(4); break;
			case 292: course_tree_quick(4); break;
			case 291: course_tree_quick(9); break;
			case 290: course_tree_quick(14); break;
			case 289: course_tree_quick(19); break;
			case 286: course_tree_quick(21); break;
			case 277: course_tree_mirror(8, 3); break;
			case 271: course_tree_mirror(14, 3); break;
			case 262: course_tree_mirror(6, 3); break;
			case 261: course_tree_mirror(17, 3); break;
			case 251: course_tree_quick(18); break;
			case 248: course_tree_mirror(7, 3); break;
			case 241: course_tree_mirror(11, 3); break;
			case 239: course_tree_mirror(17, 3); break;
			case 236: course_tree_mirror(8, 3); course_tree_mirror(20, 3); break;
			case 225: course_tree_mirror(8, 3); course_tree_mirror(19, 3); break;
			case 217: course_tree_mirror(15, 3); break;
			case 209: course_tree_mirror(7, 3); break;
			case 208: course_tree_mirror(20, 3); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 199: course_flag(41, 2); break;
			case 197: course_tree(9, 2); break;
			case 196: course_tree_quick(35); break;
			case 195: course_tree_quick(14); break;
			case 193: course_tree_mirror(5, 3); break;
			case 178: course_tree_mirror(12, 3); break;
			case 175: course_tree_mirror(19, 3); break;
			case 168: course_tree_mirror(6, 3); course_tree_mirror(18, 3); break;
			case 149: course_tree_mirror(8, 3); break;
			case 146: course_tree_quick(14); break;
			case 132: course_tree_mirror(15, 3); break;
			case 131: course_tree_mirror(19, 3); break;
			case 118: course_tree_mirror(5, 3); course_tree_mirror(12, 3); break;
			case 108: course_tree_mirror(16, 3); break;
			case 104: course_tree_mirror(17, 3); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_flag(23, 2); break;
			case 97: course_tree_mirror(6, 3); break;
			case 93: course_tree_mirror(9, 3); break;
			case 84: course_tree_mirror(15, 3); break;
			case 82: course_tree_mirror(18, 3); break;
			case 71: course_tree_mirror(7, 3); break;
			case 68: course_tree_mirror(9, 3); break;
			case 62: course_tree_mirror(15, 3); break;
			case 59: course_tree_mirror(17, 3); break;
			case 50: course_tree_quick(5); break;
			case 48: course_tree_quick(11); break;
			case 44: course_tree_quick(5); break;
			case 38: course_tree_quick(11); break;
			case 34: course_tree_quick(18); break;
			case 27: course_tree_quick(9); break;
			case 26: course_tree_quick(4); break;
		}
	}
}
