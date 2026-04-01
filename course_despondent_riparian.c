void course_despondent_riparian() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

	if (play_row == 20) {
		switch (play_progress) {
			case 450: hide_title(); break;
			
			case 50: 
				nosound();
				draw_title(54, "DESPONDENT RIPARIAN");
				title_length = title_length + 16;
								  //ABCDEFGHDESPONDENT RIPARIANABCDEFGH
				draw_text(54, 4, "LIFE IS HARD IN THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 5, "CITY OF FROSTBITE", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 7, "LIFE IS IMPOSSIBLE", 1, LIGHT_GRAY, hud_colour);	
				draw_text(54, 8, "OUTSIDE IT", 1, LIGHT_GRAY, hud_colour);
					
				draw_text(54, 10, "SO SAY THE CITY COUNCIL", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 12, "THE EVANGELIST", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 13, "HAS CAUSED A STIR", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 15, "THE SHINING PATH WAS", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 16, "CONSIDERED A MYTH", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 18, "UNTIL HE SHOWED THE WAY", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 20, "WITH WONDROUS STORIES ABOUT", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 21, "THE LORD OF THE TOWER", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 22, "THE LIGHTFALL TERMINALS", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 23, "AND THE CHAMBER OF LIGHT", 1, LIGHT_GRAY, hud_colour);
			break;
			
			case 1: play_width_target = 36; break;
		}
	}
	
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 525: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 498: course_tree(8, 2); break;
			case 496: course_tree(4, 2); course_tree(14, 2); break;
			case 494: course_tree(23, 2); course_tree(33, 2); break;
			case 493: course_tree(29, 2); break;
			case 492: course_tree(9, 2); break;
			case 491: course_tree(26, 2); break;
			case 487: course_tree(17, 2); break;
			case 486: course_tree(33, 2); break;
			case 485: course_tree(26, 2); break;
			case 483: course_tree(18, 2); break;
			case 481: course_tree(9, 2); break;
			case 480: course_tree(30, 2); break;
			case 474: course_tree(33, 5); break;
			case 473: course_tree(14, 2); break;
			case 468: course_tree(25, 2); break;
			case 466: course_tree(9, 2); break;
			case 462: course_tree(6, 5); break;
			case 457: course_tree(33, 5); break;
			case 455: course_tree(16, 2); break;
			case 449: course_tree(29, 2); break;
			case 447: course_tree(9, 2); break;
			case 445: course_tree(23, 5); break;
			case 442: course_tree(6, 2); break;
			case 441: course_tree(35, 5); break;
			case 436: course_tree(14, 2); course_tree(22, 2); break;
			case 434: course_tree(7, 5); course_tree(33, 5); break;
			case 426: course_tree(6, 2); course_tree(33, 2); break;
			case 422: course_tree(19, 2); break;
			case 420: course_tree(6, 5); course_tree(35, 2); break;
			case 413: course_tree(12, 2); course_tree(24, 2); break;
			case 410: course_tree(8, 2); break;
			case 409: course_tree(33, 2); break;
			case 406: course_tree(35, 2); break;
			case 403: course_tree(26, 5); break;
			case 401: course_tree(10, 2); break;
			case 400: course_tree(16, 2); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 397: course_tree(8, 2); break;
			case 396: course_tree(35, 2); break;
			case 395: course_tree(25, 2); break;
			case 390: course_tree(9, 5); course_tree(23, 2); break;
			case 386: course_tree(35, 3); break;
			case 380: course_tree(13, 2); course_tree(23, 2); break;
			case 379: course_tree(33, 5); break;
			case 377: course_tree(5, 2); break;
			case 376: course_tree(12, 5); break;
			case 369: course_tree(7, 2); course_tree(27, 2); break;
			case 368: course_tree(17, 2); break;
			case 365: course_tree(14, 5); course_tree(35, 2); break;
			case 364: course_tree(6, 2); break;
			case 361: course_tree(21, 2); break;
			case 358: course_tree(27, 2); course_tree(34, 5); break;
			case 357: course_tree(9, 2); break;
			case 351: course_tree(6, 5); break;
			case 345: course_tree(17, 2); break;
			case 343: course_tree(7, 2); break;
			case 342: course_tree(35, 2); break;
			case 339: course_tree(9, 5); break;
			case 335: course_tree(23, 5); break;
			case 331: course_tree(8, 2); break;
			case 328: course_tree(27, 2); break;
			case 327: course_tree(11, 2); break;
			case 324: course_tree(6, 5); course_tree(32, 2); break;
			case 317: course_tree(28, 2); break;
			case 315: course_tree(7, 2); break;
			case 313: course_tree(20, 5); break;
			case 310: course_tree(32, 2); break;
			case 309: course_tree(7, 2); break;
			case 304: course_tree(20, 2); break;
			case 302: course_tree(7, 2); course_tree(31, 5); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 298: course_tree(9, 5); break;
			case 290: course_tree(28, 2); break;
			case 289: course_tree(5, 2); break;
			case 284: course_tree(17, 2); break;
			case 278: course_tree(35, 5); break;
			case 272: course_tree(10, 5); break;
			case 263: course_tree(8, 2); course_tree(17, 5); course_tree(27, 2); break;
			case 259: course_tree(33, 5); break;
			case 257: course_tree(6, 5); break;
			case 256: course_tree(22, 2); break;
			case 250: course_tree(15, 2); course_tree(21, 2); course_tree(27, 2); break;
			case 245: course_tree(8, 5); break;
			case 243: course_tree(23, 2); course_tree(27, 2); course_tree(31, 2); break;
			case 241: course_tree(34, 2); break;
			case 239: course_tree(35, 2); break;
			case 238: course_tree(4, 2); course_tree(8, 2); course_tree(12, 2); break;
			case 232: course_tree(21, 2); break;
			case 231: course_tree(15, 2); break;
			case 229: course_tree(5, 2); break;
			case 228: course_tree(13, 2); course_tree(18, 2); break;
			case 227: course_tree(34, 5); break;
			case 226: course_tree(4, 2); break;
			case 223: course_tree(9, 5); break;
			case 222: course_tree(23, 2); break;
			case 221: course_tree(28, 2); break;
			case 218: course_tree(33, 2); break;
			case 212: course_tree(11, 5); break;
			case 202: course_tree(33, 5); break;
			case 201: course_tree(4, 2); course_tree(15, 2); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 199: course_tree(6, 2); course_tree(13, 2); break;
			case 197: course_tree(8, 2); break;
			case 193: course_tree(13, 5); break;
			case 191: course_tree(23, 2); break;
			case 190: course_tree(33, 2); break;
			case 189: course_tree(27, 2); break;
			case 187: course_tree(35, 2); break;
			case 185: course_tree(6, 5); break;
			case 178: course_tree(10, 2); course_tree(15, 2); course_tree(19, 2); course_tree(28, 2); break;
			case 177: course_tree(6, 2); break;
			case 173: course_tree(8, 5); break;
			case 169: course_tree(26, 5); break;
			case 164: course_tree(33, 5); break;
			case 161: course_tree(9, 2); course_tree(22, 2); break;
			case 154: course_tree(29, 6); break;
			case 148: course_tree(8, 5); break;
			case 141: course_tree(16, 2); break;
			case 138: course_tree(12, 2); break;
			case 137: course_tree(9, 2); break;
			case 136: course_tree(28, 2); break;
			case 134: course_tree(34, 2); break;
			case 133: course_tree(30, 2); break;
			case 132: course_tree(21, 5); break;
			case 125: course_tree(5, 2); break;
			case 124: course_tree(15, 2); break;
			case 123: course_tree(29, 2); break;
			case 120: course_tree(7, 5); break;
			case 116: course_tree(26, 5); break;
			case 114: course_tree(6, 2); break;
			case 111: course_tree(10, 2); break;
			case 110: course_tree(34, 5); break;
			case 108: course_tree(17, 2); break;
			case 103: course_tree(33, 2); break;
			case 101: course_tree(30, 2); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 98: course_tree(7, 5); course_tree(27, 2); break;
			case 96: course_tree(33, 2); break;
			case 91: course_tree(7, 2); break;
			case 90: course_tree(15, 2); break;
			case 88: course_tree(12, 2); break;
			case 87: course_tree(9, 2); break;
			case 85: course_tree(5, 2); break;
			case 81: course_tree(33, 5); break;
			case 76: course_tree(29, 2); break;
			case 74: course_tree(30, 2); break;
			case 73: course_tree(8, 5); course_tree(21, 2); course_tree(26, 2); break;
			case 72: course_tree(34, 2); break;
			case 66: course_tree(8, 2); break;
			case 65: course_tree(4, 2); course_tree(12, 2); break;
			case 64: course_tree(31, 5); break;
			case 63: course_tree(6, 2); break;
			case 58: course_tree(35, 2); break;
			case 57: course_tree(27, 2); break;
			case 54: course_tree(23, 2); break;
			case 53: course_tree(29, 2); break;
			case 52: course_tree(33, 2); break;
			case 49: course_tree(31, 2); break;
			case 48: course_tree(6, 2); break;
			case 47: course_tree(10, 2); break;
			case 46: course_tree(5, 2); break;
			case 45: course_tree(9, 2); break;
			case 44: course_tree(3, 2); break;
			case 40: course_tree(34, 2); break;
			case 39: course_tree(24, 5); break;
			case 37: course_tree(35, 2); break;
			case 34: course_tree(7, 5); break;
			case 30: course_tree(26, 2); break;
			case 27: course_tree(8, 2); break;
		}
	}
}

void course_dimming_way() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	
	
	
	if (play_row == 20) {
		switch (play_progress) {
			case 450: hide_title(); break;
			case 50: 
				nosound();
				draw_title(63, "THE DIMMING WAY");
				draw_text(63, 4, "COLD", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 6, "FATIGUE", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 8, "FROZEN", 1, LIGHT_GRAY, hud_colour);	
				draw_text(63, 10, "DARKNESS", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 12, "IMPOSSIBLE", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 14, "MISTAKE", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 16, "SLUGGISH", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 18, "LOST", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 20, "SHINING PATH", 1, LIGHT_GRAY, hud_colour);
				draw_text(63, 22, "DYING LIGHT", 1, LIGHT_GRAY, hud_colour);
			break;
			case 1: play_width_target = 55; break;
		}
	}
	
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 526: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 498: course_tree(43, 5); break;
			case 493: course_tree(6, 3); break;
			case 488: course_tree(9, 5); break;
			case 487: course_tree(45, 5); break;
			case 482: course_tree(35, 3); break;
			case 481: course_tree(28, 5); break;
			case 480: course_tree(52, 3); break;
			case 479: course_tree(3, 5); break;
			case 478: course_tree(42, 5); break;
			case 474: course_tree(31, 5); break;
			case 470: course_tree(39, 5); break;
			case 468: course_tree(48, 5); break;
			case 462: course_tree(53, 5); break;
			case 452: course_tree(16, 5); break;
			case 447: course_tree(31, 5); break;
			case 443: course_tree(10, 5); course_tree(19, 3); break;
			case 441: course_tree(26, 5); break;
			case 435: course_tree(11, 5); break;
			case 433: course_tree(23, 5); break;
			case 416: course_tree(27, 5); break;
			case 414: course_tree(45, 5); break;
			case 413: course_tree(38, 3); break;
			case 408: course_tree(34, 5); break;
			case 403: course_tree(52, 5); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 398: course_tree(38, 5); break;
			case 396: course_tree(52, 3); break;
			case 390: course_tree(32, 5); break;
			case 381: course_tree(50, 5); break;
			case 380: course_tree(23, 5); break;
			case 376: course_tree(37, 5); break;
			case 372: course_tree(52, 5); break;
			case 365: course_tree(42, 5); break;
			case 361: course_tree(15, 5); break;
			case 359: course_tree(24, 5); break;
			case 358: course_tree(3, 5); break;
			case 355: course_tree(10, 5); break;
			case 351: course_tree(49, 5); break;
			case 350: course_tree(22, 3); break;
			case 349: course_tree(16, 3); break;
			case 347: course_tree(10, 5); break;
			case 343: course_tree(38, 5); break;
			case 337: course_tree(39, 3); break;
			case 334: course_tree(26, 5); course_tree(49, 5); break;
			case 333: course_tree(36, 3); break;
			case 329: course_tree(40, 5); break;
			case 319: course_tree(47, 5); break;
			case 310: course_tree(10, 5); course_tree(48, 5); break;
			case 306: course_tree(23, 5); course_tree(32, 5); break;
			case 304: course_tree(8, 3); break;
			case 301: course_tree(13, 5); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 289: course_tree(11, 5); break;
			case 284: course_tree(24, 5); break;
			case 276: course_tree(36, 5); break;
			case 265: course_tree(48, 5); break;
			case 260: course_tree(26, 5); break;
			case 256: course_tree(35, 5); break;
			case 252: course_tree(19, 5); break;
			case 250: course_tree(3, 5); break;
			case 249: course_tree(37, 3); break;
			case 248: course_tree(46, 5); break;
			case 245: course_tree(31, 5); break;
			case 240: course_tree(39, 5); break;
			case 237: course_tree(52, 3); break;
			case 233: course_tree(44, 5); break;
			case 225: course_tree(20, 5); break;
			case 218: course_tree(12, 5); course_tree(21, 3); break;
			case 217: course_tree(28, 5); break;
			case 211: course_tree(24, 5); break;
			case 206: course_tree(40, 5); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 197: course_tree(49, 5); break;
			case 194: course_tree(7, 3); break;
			case 192: course_tree(20, 3); course_tree(29, 5); break;
			case 188: course_tree(12, 5); break;
			case 183: course_tree(28, 5); break;
			case 175: course_tree(23, 3); break;
			case 173: course_tree(14, 5); break;
			case 171: course_tree(26, 5); break;
			case 170: course_tree(3, 5); break;
			case 166: course_tree(40, 5); break;
			case 157: course_tree(50, 5); break;
			case 155: course_tree(37, 5); break;
			case 148: course_tree(43, 5); break;
			case 143: course_tree(24, 5); break;
			case 139: course_tree(36, 5); break;
			case 134: course_tree(28, 5); break;
			case 132: course_tree(48, 5); break;
			case 128: course_tree(39, 3); break;
			case 124: course_tree(34, 5); break;
			case 123: course_tree(43, 5); break;
			case 119: course_tree(53, 5); break;
			case 116: course_tree(12, 5); break;
			case 114: course_tree(35, 5); break;
			case 113: course_tree(25, 3); break;
			case 108: course_tree(24, 5); break;
			case 101: course_tree(54, 5); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 95: course_tree(12, 5); break;
			case 94: course_tree(52, 3); break;
			case 90: course_tree(26, 5); break;
			case 88: course_tree(3, 5); break;
			case 82: course_tree(44, 3); break;
			case 77: course_tree(19, 3); break;
			case 76: course_tree(31, 3); break;
			case 74: course_tree(7, 3); break;
			case 70: course_tree(14, 3); break;
			case 65: course_tree(52, 3); break;
			case 63: course_tree(11, 3); break;
			case 59: course_tree(48, 3); break;
			case 58: course_tree(37, 3); break;
			case 54: course_tree(54, 3); break;
			case 51: course_tree(30, 3); break;
			case 50: course_tree(35, 3); break;
			case 48: course_tree(17, 3); break;
			case 45: course_tree(38, 3); break;
			case 41: course_tree(33, 3); break;
			case 38: course_tree(16, 3); break;
			case 34: course_tree(34, 2); break;
			case 26: course_tree(36, 2); break;
		}
	}
}
