void course_chamber_of_vitality() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	
	if (play_row == 20) {
		switch (play_progress) {
			//case 450: hide_title(); break;
			
			case 300: play_progress = 458; draw_text(36, 13, "                                         ", 1, WHITE, BLACK); break;
				
			case 280: draw_text(36, 11, "                                           ", 1, WHITE, BLACK); break;
				
			case 260: draw_man(36, 7, 0, WHITE); draw_text(36, 9, "                                           ", 1, WHITE, BLACK); break;
			
			case 240: draw_man(36, 7, 0, WHITE); draw_text(36, 17, "                                       ", 1, WHITE, BLACK); break;
				
			case 220: draw_man(36, 7, 2, WHITE); draw_text(36, 13, "SOON YOU WILL NOT NEED THAT BATTERY PACK!", 1, WHITE, BLACK); draw_text(36, 15, "                                                 ", 1, WHITE, BLACK); break;
				
			case 200: draw_man(36, 7, 0, WHITE); draw_text(36, 11, "THE TOWER PROJECTS ENERGY TO THE TERMINALS.", 1, WHITE, BLACK); draw_text(36, 13, "                                                     ", 1, WHITE, BLACK); break;
				
			case 180: draw_man(36, 7, 1, WHITE); draw_text(36, 9, "YOU MUST CHARGE IT AT A LIGHTFALL TERMINAL.", 1, WHITE, BLACK); draw_text(36, 11, "                                        ", 1, WHITE, BLACK); break;
				
			case 160: draw_man(36, 7, 0, WHITE); draw_text(36, 9, "                 ", 1, WHITE, BLACK); break;
				
			case 140: draw_man(36, 7, 2, WHITE); draw_text(36, 17, "YOU CAN NOT ENTER THE TOWER WITHOUT IT.", 1, WHITE, BLACK); break;
				
			case 120: draw_man(36, 7, 0, WHITE); draw_text(36, 15, "THE LESSER LIGHT I GIVE YOU IS TESTAMENT TO THAT.", 1, WHITE, BLACK); break;
				
			case 100: draw_text(36, 13, "BY COMING HERE YOU HAVE PLEDGED YOURSELF TO OUR LORD.", 1, WHITE, BLACK); break;
				
			case 80: draw_man(36, 7, 0, WHITE); draw_text(36, 11, "IT IS GOOD THAT YOU HAVE ARRIVED SAFELY!", 1, WHITE, BLACK); break;
				
			case 60: draw_man(36, 7, 1, WHITE); draw_text(36, 9, "WELCOME! WELCOME!", 1, WHITE, BLACK); break;

			case 50: 
				nosound();
				//draw_title(60, "CHAMBER OF LIGHT");

			break;

			case 1: play_width_target = 72; break;
		}
	}
    switch (line) {
		case 501: next_course(); break;
		case 474: course_tree_quick(2); course_tree_quick(8); break;
		case 472: course_tree_quick(12); break;
		case 470: course_tree_quick(6); break;
		case 466: course_tree_quick(3); break;
		case 475: course_man(36, 0, WHITE); break;
		case 40: play_progress = 50; break;
		case 34: course_tree_quick(2); course_tree_quick(8); break;
		case 32: course_tree_quick(12); break;
		case 30: course_tree_quick(6); break;
		case 26: course_tree_quick(3); break;
		case 35: course_man(36, 0, WHITE); break;
	}
}

void course_circuit_walk() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

	if (play_row == 20) {
		switch (play_progress) {
			case 450: hide_title(); break;
			
			case 50: 
				nosound();
				draw_title(61, "CIRCUIT WALK");
				title_length = title_length + 8;
				draw_text(61, 4, "ON TOP OF THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 5, "TOWER SITS THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 6, "GREATER LIGHT", 1, LIGHT_GRAY, hud_colour);	
				
				draw_text(61, 8, "SUBJECTS OF THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 9, "LORD DEPEND", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 10, "ON THIS LIGHT", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 11, "FOR SAFETY AND", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 12, "COMFORT", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(61, 14, "WITHOUT IT", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 15, "FROST AND DARK", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 16, "WOULD COVER THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 17, "TOWER AND THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 18, "SURROUNDING LAND", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(61, 20, "CITIZENS OF THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 21, "FROSTBITE CITY", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 22, "DO NOT KNOW", 1, LIGHT_GRAY, hud_colour);
				draw_text(61, 23, "SUCH WARMTH", 1, LIGHT_GRAY, hud_colour);
				


			break;
			
			case 1: play_width_target = 50; break;
		}
	}


    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 525: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {	
			case 499: course_tree(41, 2); course_tree(48, 2); break;
			case 497: course_tree(41, 2); break;
			case 495: course_tree(38, 2); break;
			case 494: course_tree(43, 5); break;
			case 493: course_tree(9, 3); course_tree(33, 5); break;
			case 488: course_tree(6, 3); course_tree(47, 2); break;
			case 486: course_tree(38, 3); break;
			case 485: course_tree(31, 3); break;
			case 484: course_tree(45, 5); break;
			case 483: course_tree(8, 5); break;
			case 477: course_tree(19, 5); break;
			case 476: course_tree(10, 2); break;
			case 471: course_tree(9, 5); course_tree(37, 3); break;
			case 470: course_tree(17, 3); break;
			case 460: course_tree(31, 5); course_tree(43, 2); break;
			case 455: course_tree(42, 5); break;
			case 454: course_tree(27, 3); break;
			case 452: course_tree(33, 2); break;
			case 450: course_tree(24, 5); break;
			case 449: course_tree(40, 5); course_tree(47, 2); break;
			case 444: course_tree(28, 3); break;
			case 443: course_tree(42, 2); break;
			case 441: course_tree(21, 3); course_tree(34, 5); break;
			case 439: course_tree(47, 5); break;
			case 433: course_tree(9, 5); break;
			case 432: course_tree(17, 3); break;
			case 430: course_tree(24, 5); break;
			case 426: course_tree(14, 5); break;
			case 424: course_tree(7, 2); break;
			case 423: course_tree(24, 5); break;
			case 420: course_tree(5, 2); course_tree(15, 2); break;
			case 418: course_tree(10, 5); break;
			case 417: course_tree(21, 3); break;
			case 408: course_tree(32, 5); break;
			case 405: course_tree(21, 3); course_tree(47, 2); break;
			case 401: course_tree(42, 5); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 399: course_tree(31, 5); break;
			case 396: course_tree(10, 3); break;
			case 395: course_tree(49, 3); break;
			case 392: course_tree(30, 5); course_tree(37, 2); break;
			case 391: course_tree(44, 5); break;
			case 385: course_tree(19, 3); course_tree(33, 3); course_tree(44, 3); break;
			case 382: course_tree(38, 5); course_tree(46, 2); break;
			case 375: course_tree(44, 3); break;
			case 374: course_tree(8, 5); break;
			case 372: course_tree(36, 3); break;
			case 369: course_tree(44, 3); break;
			case 367: course_tree(23, 5); break;
			case 365: course_tree(10, 5); break;
			case 361: course_tree(23, 3); break;
			case 359: course_tree(32, 5); break;
			case 353: course_tree(13, 3); course_tree(22, 5); break;
			case 352: course_tree(6, 2); break;
			case 346: course_tree(12, 5); break;
			case 345: course_tree(44, 5); break;
			case 341: course_tree(21, 3); break;
			case 340: course_tree(31, 5); break;
			case 339: course_tree(8, 3); break;
			case 334: course_tree(19, 5); break;
			case 330: course_tree(8, 5); break;
			case 327: course_tree(43, 5); break;
			case 326: course_tree(35, 3); break;
			case 322: course_tree(28, 3); break;
			case 320: course_tree(36, 5); break;
			case 319: course_tree(48, 2); break;
			case 314: course_tree(25, 3); course_tree(35, 2); course_tree(45, 5); break;
			case 309: course_tree(29, 3); break;
			case 308: course_tree(45, 2); break;
			case 306: course_tree(36, 5); break;
			case 303: course_tree(23, 3); break;
			case 302: course_tree(44, 5); break;
			case 301: course_tree(34, 3); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 294: course_tree(10, 5); break;
			case 288: course_tree(6, 2); course_tree(20, 5); break;
			case 285: course_tree(9, 5); break;
			case 282: course_tree(21, 3); break;
			case 278: course_tree(18, 5); break;
			case 275: course_tree(47, 5); break;
			case 273: course_tree(39, 3); break;
			case 270: course_tree(34, 5); break;
			case 268: course_tree(46, 2); break;
			case 265: course_tree(41, 5); break;
			case 264: course_tree(33, 3); break;
			case 259: course_tree(47, 3); break;
			case 258: course_tree(38, 2); break;
			case 257: course_tree(33, 5); break;
			case 255: course_tree(44, 5); break;
			case 249: course_tree(6, 3); break;
			case 248: course_tree(15, 5); break;
			case 241: course_tree(17, 3); break;
			case 240: course_tree(9, 5); course_tree(23, 5); break;
			case 234: course_tree(15, 5); break;
			case 233: course_tree(7, 2); break;
			case 229: course_tree(23, 5); break;
			case 227: course_tree(14, 2); break;
			case 226: course_tree(43, 5); break;
			case 225: course_tree(9, 5); break;
			case 218: course_tree(37, 5); course_tree(46, 5); break;
			case 211: course_tree(35, 5); course_tree(40, 2); break;
			case 210: course_tree(47, 5); break;
			case 205: course_tree(40, 3); break;
			case 203: course_tree(46, 5); break;
			case 202: course_tree(33, 3); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 198: course_tree(39, 3); break;
			case 196: course_tree(9, 5); break;
			case 193: course_tree(23, 5); break;
			case 190: course_tree(8, 2); break;
			case 186: course_tree(11, 5); break;
			case 181: course_tree(21, 5); break;
			case 178: course_tree(9, 5); break;
			case 173: course_tree(22, 3); break;
			case 171: course_tree(9, 2); break;
			case 170: course_tree(18, 5); break;
			case 163: course_tree(34, 5); break;
			case 157: course_tree(40, 5); break;
			case 151: course_tree(38, 2); break;
			case 150: course_tree(46, 5); break;
			case 149: course_tree(32, 5); break;
			case 143: course_tree(45, 3); break;
			case 142: course_tree(37, 5); break;
			case 139: course_tree(46, 3); break;
			case 135: course_tree(37, 5); break;
			case 134: course_tree(46, 5); break;
			case 119: course_tree(24, 5); break;
			case 118: course_tree(6, 3); break;
			case 115: course_tree(12, 5); break;
			case 111: course_tree(23, 5); break;
			case 107: course_tree(9, 5); break;
			case 102: course_tree(20, 5); break;
			case 101: course_tree(5, 2); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_tree(11, 5); break;
			case 95: course_tree(48, 5); break;
			case 91: course_tree(39, 5); break;
			case 88: course_tree(46, 5); break;
			case 87: course_tree(9, 3); break;
			case 84: course_tree(37, 5); break;
			case 80: course_tree(46, 3); break;
			case 78: course_tree(37, 5); break;
			case 77: course_tree(8, 3); break;
			case 76: course_tree(45, 2); break;
			case 72: course_tree(40, 2); course_tree(47, 5); break;
			case 71: course_tree(18, 3); break;
			case 59: course_tree(10, 5); break;
			case 58: course_tree(22, 5); break;
			case 52: course_tree(42, 3); break;
			case 51: course_tree(8, 2); break;
			case 49: course_tree(14, 5); break;
			case 48: course_tree(25, 5); break;
			case 45: course_tree(6, 2); break;
			case 42: course_tree(20, 3); break;
			case 41: course_tree(12, 5); break;
			case 34: course_tree(11, 2); course_tree(18, 5); break;
			case 32: course_tree(7, 3); course_tree(44, 5); break;
			case 27: course_tree(14, 5); break;
			//case 26: course_tree(7, 2); course_tree(47, 2); break;
			//case 23: course_tree(46, 2); break;
		}
	}

 
}
