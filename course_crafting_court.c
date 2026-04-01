void course_energy_sepulchre() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

	if (play_row == 20) {
		switch (play_progress) {
			case 505: next_course(); break;
			
			case 450: hide_title(); break;
			//case 50: 
			//	nosound();
			//  draw_title(54, "BESIDE THE FROZEN SEPULCHRE");
			//break;
			case 333: play_course = 12; update_map(75, 4, RED, BLACK); break;
			
			case 166: play_course = 11; update_map(75, 4, RED, BLACK); break;
			case 1: play_width_target = 72; break;
		}
	}


	if ((line > 400) && (line < 500)) {
        switch (line) {
			case 496: course_tree_mirror(25, 3); break;
			case 495: course_tree(34, 3); break;
			case 492: course_tree_mirror(30, 2); break;
			case 489: course_tree_mirror(12, 3); break;
			case 485: course_tree_mirror(21, 3); break;
			case 484: course_tree(7, 3); break;
			case 483: course_tree_mirror(12, 2);break;
			case 479: course_tree_mirror(15, 3); break;
			case 476: course_tree_mirror(7, 5); break;
			case 473: course_tree_mirror(28, 3); break;
			case 468: course_tree_mirror(14, 3); course_tree(33, 5); break;
			case 465: course_tree_mirror(6, 5); break;
			case 461: course_tree(22, 3); break;
			case 458: course_tree_mirror(8, 3); break;
			case 456: course_tree(36, 3); break;
			case 453: course_tree_mirror(22, 3); break;
			case 449: course_tree_mirror(9, 3); course_tree(36, 3); break;
			case 447: course_tree(22, 5); break;
			case 438: course_tree_mirror(10, 3);break;
			case 432: course_tree_mirror(18, 2); course_tree(34, 3); break;
			case 430: course_tree_mirror(6, 3); break;
			case 427: course_tree_mirror(28, 3); break;
			case 426: course_tree(13, 3); break;
			case 423: course_tree_mirror(19, 3); break;
			case 416: course_tree_mirror(19, 3); break;
			case 413: course_tree_mirror(19, 3); break;
			case 409: course_tree_mirror(18, 3); course_tree_mirror(25, 3); break;
			case 404: course_tree_mirror(16, 3); break;
			case 401: course_tree_mirror(10, 3); course_tree_mirror(21, 3); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 398: course_tree_mirror(15, 3); break;
			case 393: course_tree_mirror(17, 3); break;
			case 390: course_tree_mirror(12, 3); course_tree_mirror(22, 3); break;
			case 387: course_tree(17, 3); break;
			case 381: course_tree_mirror(12, 3); course_tree_mirror(17, 3); break;
			case 378: course_tree_mirror(12, 3); break;
			case 375: course_tree_mirror(12, 3); course_tree_mirror(17, 3); break;
			case 366: course_tree(12, 3); course_tree_mirror(24, 3); break;
			case 360: course_tree_mirror(19, 2); break;
			case 358: course_tree_mirror(6, 3); break;
			case 357: course_tree_mirror(32, 3); break;
			case 354: course_tree_mirror(13, 3); course_tree_mirror(26, 3); break;
			case 351: course_tree_mirror(19, 3); break;
			case 346: course_tree(34, 2); break;
			case 344: course_tree_mirror(7, 3); break;
			case 342: course_tree_mirror(29, 3); break;
			case 341: course_tree_mirror(16, 3); break;
			case 338: course_tree(36, 3); break;
			case 333: course_tree_mirror(27, 3); break;
			case 330: course_tree_mirror(9, 3); break;
			case 329: course_tree(36, 5); break;
			case 325: course_tree_mirror(6, 5); break;
			case 320: course_tree(36, 3); break;
			case 318: course_tree_mirror(19, 3); break;
			case 314: course_tree_mirror(9, 5); break;
			case 312: course_tree_mirror(30, 3); break;
			case 306: course_tree_mirror(18, 3); course_tree_mirror(30, 4); break;
			case 302: course_tree(36, 3); break;
			case 301: course_tree_mirror(30, 2); break;		
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 299: course_tree_mirror(9, 3); break;
			case 295: course_tree(29, 3); break;
			case 293: course_tree_mirror(5, 3); course_tree_mirror(15, 2); break;
			case 291: course_tree_mirror(19, 5); break;
			case 290: course_tree(36, 3); break;
			case 282: course_tree_mirror(11, 3); course_tree_mirror(24, 3); break;
			case 279: course_tree(34, 2); break;
			case 276: course_tree_mirror(28, 3); break;
			case 275: course_tree_mirror(7, 5); break;
			case 267: course_tree_mirror(25, 5); break;
			case 266: course_tree(34, 3); break;
			case 264: course_tree_mirror(6, 2); break;
			case 259: course_tree(36, 3); break;
			case 258: course_tree_mirror(9, 2); break;
			case 256: course_tree_mirror(5, 3); course_tree_mirror(17, 5); break;
			case 255: course_tree(36, 2); break;
			case 251: course_tree_mirror(4, 3); break;
			case 249: course_tree_mirror(30, 5); break;
			case 246: course_tree_mirror(5, 3); break;
			case 244: course_tree_mirror(32, 2); break;
			case 240: course_tree_mirror(14, 5); break;
			case 239: course_tree(36, 5); break;
			case 234: course_tree_mirror(30, 2); break;
			case 231: course_tree(36, 2); break;
			case 230: course_tree_mirror(21, 5); break;
			case 229: course_tree_mirror(32, 3); break;
			case 226: course_tree_mirror(5, 3); break;
			case 221: course_tree_mirror(9, 5); break;
			case 218: course_tree_mirror(27, 2); course_tree(33, 5); break;
			case 215: course_tree(21, 3); break;
			case 212: course_tree(28, 2); break;
			case 211: course_tree_mirror(6, 5); break;
			case 208: course_tree_mirror(24, 5); break;
			case 206: course_tree_mirror(5, 2); course_tree(34, 3); break;
			case 202: course_tree_mirror(26, 2); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 199: course_tree_mirror(7, 3); break;
			case 195: course_tree_mirror(32, 2); break;
			case 194: course_tree_mirror(23, 3); break;
			case 193: course_tree_mirror(11, 5); break;
			case 189: course_tree(36, 5); break;
			case 186: course_tree_mirror(24, 5); break;
			case 182: course_tree(36, 3); break;
			case 179: course_tree_mirror(10, 3); break;
			case 178: course_tree_mirror(17, 2); break;
			case 172: course_tree_mirror(21, 5); course_tree(33, 5); break;
			case 165: course_tree(26, 2); break;
			case 163: course_tree_mirror(8, 3); course_tree_mirror(20, 3); break;
			case 161: course_tree(30, 2); break;
			case 158: course_tree_mirror(6, 5); course_tree(36, 5); break;
			case 148: course_tree(10, 3); break;
			case 145: course_tree_mirror(20, 5); break;
			case 144: course_tree_mirror(9, 2); break;
			case 143: course_tree_mirror(29, 3); break;
			case 142: course_tree_mirror(11, 3); break;
			case 137: course_tree_mirror(20, 5); break;
			case 136: course_tree(34, 5); break;
			case 133: course_tree_mirror(9, 2); break;
			case 129: course_tree_mirror(4, 3); break;
			case 128: course_tree_mirror(25, 3); course_tree(36, 2); break;
			case 122: course_tree(8, 5); break;
			case 121: course_tree_mirror(30, 3); break;
			case 118: course_tree(32, 2); break;
			case 115: course_tree(6, 2); course_tree_mirror(13, 3); break;
			case 111: course_tree_mirror(27, 2); break;
			case 109: course_tree_mirror(8, 3); break;
			case 107: course_tree(33, 5); break;
			case 102: course_tree_mirror(24, 5); break;
			case 101: course_tree_mirror(3, 2); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_tree(36, 5); break;
			case 98: course_tree_mirror(9, 5); break;
			case 94: course_tree_mirror(32, 2); break;
			case 93: course_tree(25, 5); break;
			case 92: course_tree_mirror(4, 2); break;
			case 88: course_tree_mirror(11, 3); break;
			case 86: course_tree(28, 3); course_tree(33, 2); break;
			case 85: course_tree_mirror(5, 2); break;
			case 82: course_tree(36, 5); break;
			case 76: course_tree_mirror(12, 5); break;
			case 71: course_tree_mirror(29, 2); break;
			case 70: course_tree(7, 2); break;
			case 67: course_tree_mirror(21, 3); break;
			case 63: course_tree_mirror(7, 5); break;
			case 61: course_tree_mirror(17, 5); course_tree_mirror(32, 5); break;
			case 52: course_tree(36, 5); break;
			case 51: course_tree_mirror(6, 5); break;
			case 41: course_tree_mirror(29, 3); break;
			case 37: course_tree(8, 5); break;
			case 33: course_tree_mirror(24, 5); course_tree(36, 5); break;
			case 23: course_tree(14, 3); break;
		}
	}
}

void course_crafting_court() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 75: draw_text(63, 2, "              ", 1, RED, hud_colour); break;
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
			case 75: draw_text(63, 2, "CRAFTING COURT", 1, RED, hud_colour); break;
			case 1: play_width_target = 35; break;
		}
	}
}
