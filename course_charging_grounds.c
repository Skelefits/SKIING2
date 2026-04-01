void course_the_burdened_way() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

	if (play_row == 20) {
		switch (play_progress) {
			case 450: hide_title(); break;
			//case 50: 
			//	nosound();
			//	draw_title(55, "THE BURDENED WAY"); break;
			//break;
			case 1: play_width_target = 72; break;
		}
	}
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 550: next_course(); break;
			case 525: play_width_target = 72; break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: course_tree(27, 5); break;
			case 498: course_tree_mirror(11, 4); break;
			case 490: course_tree_mirror(8, 3); course_tree_mirror(28, 4); break;
			case 487: course_tree_mirror(13, 4); course_tree(35, 4); break;
			case 481: course_tree_mirror(4, 3); course_tree_mirror(18, 4); course_tree(26, 4); course_tree(35, 4); break;
			case 476: course_tree(35, 4); break;
			case 471: course_tree_mirror(6, 4); break;
			case 470: course_tree_mirror(14, 4); break;
			case 468: course_tree(35, 4); break;
			case 465: course_tree(23, 5); break;
			case 463: course_tree_mirror(5, 4); course_tree_mirror(12, 3); break;
			case 462: course_tree(34, 4); break;
			case 457: course_tree_mirror(28, 4); break;
			case 453: course_tree_mirror(19, 4); break;
			case 452: course_tree(37, 5); break;
			case 451: course_tree_mirror(10, 4); break;
			case 442: course_tree_mirror(11, 4); course_tree_mirror(25, 4); break;
			case 437: course_tree_mirror(8, 3); course_tree(28, 4); break;
			case 435: course_tree(16, 4); course_tree(35, 4); break;
			case 428: course_tree_mirror(8, 4); break;
			case 427: course_tree_mirror(18, 4); course_tree_mirror(26, 3); break;
			case 426: course_tree(33, 5); break;
			case 420: course_tree_mirror(8, 4); break;
			case 419: course_tree_mirror(19, 3); break;
			case 417: course_tree(32, 2); break;
			case 412: course_tree_mirror(25, 4); break;
			case 411: course_tree_mirror(9, 4); break;
			case 406: course_tree(30, 5); break;
			case 404: course_tree_mirror(8, 4); course_tree_mirror(19, 5); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 398: course_tree(28, 4); break;
			case 397: course_tree_mirror(17, 3); break;
			case 392: course_tree_mirror(10, 4); course_tree_mirror(26, 5); break;
			case 385: course_tree_mirror(15, 3); break;
			case 383: course_tree_mirror(23, 4); break;
			case 381: course_tree(6, 4); break;
			case 380: course_tree(34, 4); break;
			case 375: course_tree_mirror(6, 3); break;
			case 374: course_tree(30, 4); break;
			case 370: course_tree_mirror(11, 4); break;
			case 366: course_tree(32, 4); break;
			case 365: course_tree_mirror(6, 3); break;
			case 363: course_tree_mirror(24, 4); break;
			case 362: course_tree_mirror(12, 4); break;
			case 357: course_tree_mirror(5, 4); break;
			case 355: course_tree_mirror(27, 4); break;
			case 350: course_tree_mirror(16, 4); break;
			case 349: course_tree(30, 5); break;
			case 346: course_tree_mirror(7, 4); break;
			case 341: course_tree_mirror(21, 4); break;
			case 340: course_tree(34, 4); break;
			case 336: course_tree_mirror(9, 4); break;
			case 334: course_tree(31, 4); break;
			case 332: course_tree_mirror(20, 5); break;
			case 331: course_tree_mirror(8, 4); break;
			case 324: course_tree(7, 4); break;
			case 321: course_tree_mirror(13, 4); course_tree_mirror(27, 4); break;
			case 316: course_tree(34, 3); break;
			case 314: course_tree_mirror(26, 5); break;
			case 313: course_tree_mirror(8, 4); break;
			case 312: course_tree(35, 4); break;
			case 306: course_tree_mirror(9, 4); break;
			case 305: course_tree_mirror(20, 3); break;
			case 302: course_tree_mirror(26, 4); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 299: course_tree_mirror(6, 5); break;
			case 297: course_tree(35, 5); break;
			case 295: course_tree_mirror(25, 4); break;
			case 291: course_tree_mirror(11, 4); break;
			case 289: course_tree_mirror(29, 3); break;
			case 288: course_tree(34, 4); break;
			case 286: course_tree_mirror(23, 4); break;
			case 284: course_tree(12, 4); break;
			case 283: course_tree(32, 3); break;
			case 281: course_tree_mirror(24, 5); break;
			case 275: course_tree_mirror(28, 4); break;
			case 274: course_tree_mirror(8, 4); break;
			case 269: course_tree(7, 3); break;
			case 267: course_tree_mirror(30, 4); break;
			case 266: course_tree_mirror(10, 4); break;
			case 258: course_tree(7, 5); break;
			case 256: course_tree_mirror(14, 3); break;
			case 255: course_tree_mirror(28, 4); break;
			case 252: course_tree_mirror(8, 4); break;
			case 246: course_tree(35, 4); break;
			case 245: course_tree_mirror(21, 4); break;
			case 243: course_tree_mirror(8, 4); break;
			case 241: course_tree_mirror(30, 5); break;
			case 234: course_tree(32, 4); break;
			case 231: course_tree_mirror(14, 4); break;
			case 230: course_tree_mirror(24, 4); break;
			case 227: course_tree(36, 4); break;
			case 226: course_tree(8, 3); break;
			case 224: course_tree(23, 3); break;
			case 219: course_tree_mirror(12, 3); break;
			case 216: course_tree(30, 3); break;
			case 215: course_tree_mirror(14, 3); break;
			case 206: course_tree_mirror(5, 3); course_tree_mirror(18, 3); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 196: course_tree(14, 3); course_tree_mirror(26, 3); break;
			case 194: course_tree(4, 3); break;
			case 192: course_tree(34, 3); break;
			case 188: course_tree_mirror(9, 4); break;
			case 187: course_tree_mirror(23, 5); break;
			case 185: course_tree_mirror(16, 3); break;
			case 184: course_tree(37, 2); break;
			case 180: course_tree_mirror(9, 4); course_tree_mirror(25, 4); break;
			case 177: course_tree(37, 2); break;
			case 176: course_tree_mirror(6, 3); break;
			case 175: course_tree_mirror(14, 4); break;
			case 171: course_tree_mirror(9, 4); break;
			case 167: course_tree(28, 4); break;
			case 165: course_tree_mirror(13, 4); break;
			case 158: course_tree(33, 4); break;
			case 155: course_tree(27, 4); break;
			case 154: course_tree_mirror(9, 5); break;
			case 149: course_tree_mirror(9, 5); break;
			case 147: course_tree_mirror(32, 4); break;
			case 142: course_tree_mirror(21, 4); break;
			case 139: course_tree_mirror(8, 4); break;
			case 137: course_tree_mirror(26, 3); break;
			case 135: course_tree_mirror(14, 3); break;
			case 131: course_tree_mirror(10, 3); course_tree_mirror(28, 3); break;
			case 124: course_tree_mirror(13, 3); break;
			case 119: course_tree_mirror(32, 3); break;
			case 116: course_tree_mirror(22, 3); break;
			case 115: course_tree_mirror(8, 3); break;
			case 108: course_tree_mirror(10, 4); break;
			case 106: course_tree_mirror(21, 4); break;
			case 101: course_tree_mirror(32, 5); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 100: course_tree_mirror(7, 4); break;
			case 99: course_tree_mirror(20, 4); break;
			case 95: course_tree(33, 4); break;
			case 91: course_tree_mirror(15, 4); break;
			case 84: course_tree_mirror(10, 5); break;
			case 81: course_tree(32, 4); break;
			case 79: course_tree_mirror(7, 4); break;
			case 76: course_tree_mirror(22, 4); break;
			case 74: course_tree(37, 5); break;
			case 73: course_tree_mirror(15, 4); break;
			case 71: course_tree_mirror(9, 4); break;
			case 67: course_tree(32, 2); break;
			case 63: course_tree(33, 2); break;
			case 62: course_tree(15, 4); break;
			case 58: course_tree(27, 4); break;
			case 56: course_tree(10, 4); break;
			case 53: course_tree(32, 4); break;
			case 51: course_tree(8, 3); course_tree(17, 4); break;
			case 47: course_tree(35, 5); break;
			case 44: course_tree(10, 5); break;
			case 39: course_tree(17, 4); break;
			case 35: course_tree(7, 4); break;
			case 34: course_tree(29, 4); break;
			case 32: course_tree(19, 5); break;
			case 27: course_tree(26, 4); break;
			case 26: course_tree(12, 4); break;
			case 25: course_tree(35, 2); break;
		}
	}
}

void course_the_charging_grounds() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

	if (play_row == 20) {
		switch (play_progress) {
			case 450: hide_title(); break;
			case 50: 
				nosound();
				draw_title(54, "THE CHARGING GROUNDS");
				title_length = title_length + 14;
				draw_text(54, 4, "ACOLYTES ARE GIVEN LESSOR LIGHTS", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 5, "WHEN THEY VISIT THE CHAMBER", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 7, "THEY ARE SENT ONWARDS TO THE", 1, LIGHT_GRAY, hud_colour);	
				draw_text(54, 8, "CHARGING GROUNDS FOR MEDITATION", 1, LIGHT_GRAY, hud_colour);	
				
				draw_text(54, 10, "LEARNING TO TRUST THE LESSER LIGHT ", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 11, "AND ITS SOURCE ALLOWS ACOLYTES TO ", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 12, "SHED THEIR BATTERIES THAT CHAIN ", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 13, "THEM TO DOOMED CITIES", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 15, "WHEN ACOLYTES ARE READY THEY VISIT", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 16, "A LIGHTFALL TERMINAL WHERE ENERGY", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 17, "FROM THE GREATER LIGHT ATOP THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 18, "CELESTIAL TOWER FLOWS INTO THEM", 1, LIGHT_GRAY, hud_colour);
				
				draw_text(54, 20, "A CHARGED LESSER LIGHT IS CAPABLE", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 21, "OF SUSTAINING AN ACOLYTE IN THE", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 22, "WILDERNESS AND IS ESSENTIAL FOR", 1, LIGHT_GRAY, hud_colour);
				draw_text(54, 23, "OPENING THE GATES AT THE TOWER", 1, LIGHT_GRAY, hud_colour);
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
			case 498: course_tree(10, 5); course_tree(28, 5); break;
			case 493: course_tree(19, 3); course_tree(30, 4); break;
			case 487: course_tree(33, 5); break;
			case 483: course_tree(10, 5); break;
			case 482: course_tree(29, 2); course_tree(34, 4); break;
			case 479: course_tree(23, 4); break;
			case 477: course_tree(3, 2); break;
			case 473: course_tree(29, 5); break;
			case 472: course_tree(9, 2); break;
			case 471: course_tree(3, 2); break;
			case 468: course_tree(13, 5); break;
			case 467: course_tree(35, 4); break;
			case 466: course_tree(21, 2); break;
			case 462: course_tree(32, 5); break;
			case 457: course_tree(6, 5); course_tree(26, 4); break;
			case 454: course_tree(20, 2); break;
			case 451: course_tree(35, 5); break;
			case 450: course_tree(7, 4); break;
			case 446: course_tree(21, 5); break;
			case 445: course_tree(30, 2); break;
			case 438: course_tree(9, 5); break;
			case 437: course_tree(28, 4); break;
			case 432: course_tree(17, 2); course_tree(34, 2); break;
			case 430: course_tree(27, 5); break;
			case 424: course_tree(27, 4); break;
			case 422: course_tree(17, 5); break;
			case 421: course_tree(7, 2); course_tree(35, 5); break;
			case 416: course_tree(3, 2); course_tree(20, 2); course_tree(29, 4); break;
			case 413: course_tree(35, 5); break;
			case 410: course_tree(11, 5); break;
			case 409: course_tree(3, 3); break;
			case 408: course_tree(34, 2); break;
			case 407: course_tree(29, 5); break;
			case 404: course_tree(3, 4); break;
			case 401: course_tree(32, 2); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 399: course_tree(12, 2); break;
			case 398: course_tree(6, 5); course_tree(35, 2); break;
			case 397: course_tree(29, 5); break;
			case 392: course_tree(7, 2); break;
			case 391: course_tree(15, 5); break;
			case 390: course_tree(34, 4); break;
			case 389: course_tree(3, 2); break;
			case 386: course_tree(7, 4); break;
			case 385: course_tree(31, 2); break;
			case 381: course_tree(3, 2); break;
			case 380: course_tree(35, 5); break;
			case 379: course_tree(19, 2); break;
			case 373: course_tree(32, 5); break;
			case 372: course_tree(9, 5); break;
			case 366: course_tree(20, 5); break;
			case 365: course_tree(8, 4); break;
			case 360: course_tree(17, 2); break;
			case 359: course_tree(11, 2); course_tree(35, 5); break;
			case 358: course_tree(29, 2); break;
			case 357: course_tree(3, 2); break;
			case 355: course_tree(8, 5); break;
			case 347: course_tree(13, 3); break;
			case 346: course_tree(7, 4); break;
			case 342: course_tree(13, 5); course_tree(31, 5); break;
			case 341: course_tree(3, 2); break;
			case 337: course_tree(32, 2); break;
			case 336: course_tree(26, 4); break;
			case 333: course_tree(35, 5); break;
			case 332: course_tree(9, 5); break;
			case 327: course_tree(3, 2); break;
			case 325: course_tree(13, 4); course_tree(22, 5); break;
			case 323: course_tree(3, 2); break;
			case 319: course_tree(35, 4); break;
			case 318: course_tree(3, 4); break;
			case 315: course_tree(33, 2); break;
			case 314: course_tree(3, 2); break;
			case 313: course_tree(10, 5); break;
			case 308: course_tree(11, 2); break;
			case 307: course_tree(21, 5); break;
			case 302: course_tree(21, 2); course_tree(27, 5); break;
			case 301: course_tree(16, 5); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 297: course_tree(23, 2); break;
			case 296: course_tree(35, 4); break;
			case 290: course_tree(23, 5); course_tree(34, 2); break;
			case 289: course_tree(35, 4); break;
			case 288: course_tree(13, 5); break;
			case 282: course_tree(11, 4); break;
			case 281: course_tree(20, 5); break;
			case 278: course_tree(6, 5); break;
			case 269: course_tree(35, 5); break;
			case 268: course_tree(28, 4); break;
			case 266: course_tree(15, 5); break;
			case 263: course_tree(23, 5); break;
			case 261: course_tree(30, 2); break;
			case 259: course_tree(3, 2); break;
			case 256: course_tree(34, 5); break;
			case 254: course_tree(8, 4); break;
			case 250: course_tree(21, 5); break;
			case 249: course_tree(7, 2); course_tree(13, 2); break;
			case 246: course_tree(12, 5); course_tree(32, 2); break;
			case 244: course_tree(29, 4); break;
			case 238: course_tree(3, 2); course_tree(8, 3); break;
			case 231: course_tree(3, 4); break;
			case 227: course_tree(23, 5); course_tree(34, 4); break;
			case 224: course_tree(6, 2); break;
			case 222: course_tree(11, 5); course_tree(33, 4); break;
			case 217: course_tree(8, 2); course_tree(31, 2); break;
			case 216: course_tree(35, 4); break;
			case 213: course_tree(25, 5); break;
			case 211: course_tree(13, 4); break;
			case 205: course_tree(29, 4); break;
			case 203: course_tree(6, 2); course_tree(35, 5); break;
			case 201: course_tree(14, 5); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 199: course_tree(27, 2); break;
			case 198: course_tree(33, 4); break;
			case 190: course_tree(15, 5); break;
			case 189: course_tree(8, 2); break;
			case 185: course_tree(4, 4); break;
			case 182: course_tree(35, 5); break;
			case 180: course_tree(7, 5); break;
			case 175: course_tree(8, 2); course_tree(15, 4); break;
			case 173: course_tree(3, 2); break;
			case 172: course_tree(32, 2); break;
			case 169: course_tree(7, 4); break;
			case 166: course_tree(27, 5); break;
			case 165: course_tree(13, 5); break;
			case 164: course_tree(3, 2); break;
			case 158: course_tree(28, 4); break;
			case 154: course_tree(6, 2); course_tree(33, 5); break;
			case 153: course_tree(27, 2); break;
			case 149: course_tree(9, 5); break;
			case 144: course_tree(30, 2); break;
			case 143: course_tree(6, 4); course_tree(18, 4); break;
			case 141: course_tree(35, 4); break;
			case 138: course_tree(3, 2); break;
			case 136: course_tree(28, 5); break;
			case 135: course_tree(9, 5); break;
			case 129: course_tree(7, 5); course_tree(13, 2); course_tree(34, 2); break;
			case 127: course_tree(29, 5); break;
			case 120: course_tree(9, 5); course_tree(32, 4); break;
			case 118: course_tree(24, 5); break;
			case 110: course_tree(3, 2); course_tree(10, 4); break;
			case 109: course_tree(35, 5); break;
			case 105: course_tree(3, 4); break;
			case 101: course_tree(30, 5); break;
		}
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 98: course_tree(21, 4); break;
			case 95: course_tree(10, 5); course_tree(26, 5); break;
			case 91: course_tree(35, 5); break;
			case 84: course_tree(11, 2); course_tree(16, 4); break;
			case 82: course_tree(8, 4); break;
			case 81: course_tree(35, 5); break;
			case 78: course_tree(6, 2); course_tree(13, 5); break;
			case 69: course_tree(28, 4); break;
			case 65: course_tree(6, 5); break;
			case 62: course_tree(13, 5); course_tree(32, 4); break;
			case 60: course_tree(3, 2); break;
			case 57: course_tree(7, 3); break;
			case 53: course_tree(8, 3); break;
			case 50: course_tree(33, 5); break;
			case 49: course_tree(20, 4); break;
			case 47: course_tree(3, 2); course_tree(13, 2); break;
			case 46: course_tree(8, 5); break;
			case 45: course_tree(35, 4); break;
			case 38: course_tree(29, 4); break;
			case 36: course_tree(14, 4); break;
			case 31: course_tree(8, 4); break;
			case 28: course_tree(15, 5); course_tree(35, 5); break;
			case 26: course_tree(26, 4); break;
			case 25: course_tree(32, 2); break;
		}
	}
}
