void course_rivers_of_death() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 575: next_course(); break;
			case 549: give_points(-10); break;
			case 548: if (play_course_next != 0) {play_course = play_course_next; update_map(75, 4, RED, BLACK); play_progress = 0;} break;
			//If you have negative points, go to special ending!
			case 524: course_tree_mirror(29, 3); break;
			case 522: course_tree_mirror(24, 3); course_tree(35, 3); break;
			case 519: course_tree_mirror(30, 3); break;
			case 513: course_tree(15, 5); course_tree_mirror(30, 5); break;
			case 510: course_tree_mirror(8, 5); break;
			case 507: course_tree_mirror(11, 3); break;
			case 505: course_tree_mirror(20, 3); break;
			case 503: course_tree_mirror(8, 3); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: course_special(16, 3, 7, 80); break; //Goes to 31!
			case 498: course_tree(5, 3); break;
			case 497: course_tree(25, 3); course_tree(34, 5); break;
			case 495: course_tree(9, 3); break;
			case 492: course_tree_mirror(20, 3); break;
			case 491: course_tree_mirror(13, 3); course_tree(27, 3); break;
			case 487: course_tree_mirror(11, 3); course_tree(22, 3); break;
			case 484: course_tree_mirror(26, 3); break;
			case 483: course_tree_mirror(17, 3); break;
			case 482: course_tree_mirror(10, 5); break;
			case 480: course_tree_mirror(21, 3); break;
			case 476: course_tree_mirror(5, 3); break;
			case 475: if (play_course_next != 0) {hide_title();} break;	
			case 474: course_tree(33, 5); break;
			case 468: course_tree_mirror(22, 3); break;
			case 466: course_tree_mirror(14, 3); break;
			case 462: course_tree(9, 3); course_tree_mirror(17, 3); break;
			case 460: course_tree_mirror(21, 3); break;
			case 457: course_tree_mirror(15, 3); break;
			case 452: course_tree(35, 5); break;
			case 449: course_special(23, 3, 7, 80); break; //Goes to 31!
			case 446: course_tree_mirror(11, 5); break;
			case 439: course_tree_mirror(24, 3); break;
			case 437: course_tree_mirror(17, 3); course_tree(30, 3); break;
			case 433: course_tree_mirror(10, 5); break;
			case 430: course_tree_mirror(21, 3); break;
			case 421: course_tree_mirror(9, 5); break;
			case 419: course_tree_mirror(25, 5); break;
			case 414: course_tree_mirror(10, 3); break;
			case 413: course_tree_mirror(17, 3); break;
			case 410: course_tree(32, 5); break;
			case 409: course_tree_mirror(8, 3); break;
			case 406: course_tree(17, 3); break;
			case 405: course_tree(11, 3); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 399: course_special(23, 3, 7, 80); break; //Goes to 31!
			case 398: course_tree(31, 5); break;
			case 396: course_tree(4, 3); break;
			case 394: course_tree(11, 5); course_tree(20, 5); break;
			case 392: course_tree(28, 3); break;
			case 389: course_tree(35, 3); break;
			case 388: course_tree_mirror(2, 5); break;
			case 378: course_tree(33, 3); break;
			case 377: course_tree_mirror(27, 3); break;
			case 375: course_tree_mirror(6, 5); break;
			case 373: course_tree_mirror(26, 3); break;
			case 368: course_tree(34, 5); break;
			case 365: course_tree_mirror(6, 4); break;
			case 363: course_tree_mirror(13, 3); break;
			case 360: course_tree_mirror(6, 3); break;
			case 359: course_tree_mirror(11, 3); break;
			case 358: course_tree_mirror(18, 3); break;
			case 354: course_tree_mirror(7, 3); course_tree(32, 5); break;
			case 352: course_tree_mirror(15, 3); break;
			case 349: course_special(21, 3, 7, 80); break; //Goes to 31!
			case 348: course_tree_mirror(7, 5); break;
			case 345: course_tree(31, 3); break;
			case 341: course_tree_mirror(30, 3); break;
			case 338: course_tree_mirror(27, 3); break;
			case 334: course_tree(18, 3); course_tree_mirror(26, 3); course_tree(33, 3); break;
			case 331: course_tree(11, 3); course_tree_mirror(21, 4); course_tree_mirror(29, 3); break;
			case 327: course_tree(13, 3); break;
			case 326: course_tree(21, 3); course_tree_mirror(28, 3); break;
			case 322: course_tree(34, 5); break;
			case 319: course_tree_mirror(13, 5); break;
			case 313: course_tree(30, 5); break;
			case 307: course_tree_mirror(9, 3); break;
			case 303: course_tree(15, 4); break;
			case 301: course_tree_mirror(7, 4); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 299: course_special(25, 3, 7, 80); break; //Goes to 31!
			case 298: course_tree_mirror(15, 3); break;
			case 297: course_tree(33, 5); break;
			case 295: course_tree_mirror(7, 3); break;
			case 291: course_tree(11, 5); break;
			case 285: course_tree(19, 5); break;
			case 280: course_tree(28, 3); break;
			case 278: course_tree_mirror(21, 3); course_tree(35, 3); break;
			case 250: course_tree_mirror(4, 3); break;
			case 249: course_special(27, 3, 7, 80); break; //Goes to 31!
			case 248: course_tree(34, 3); break;
			case 245: course_tree(8, 3); break;
			case 243: course_tree(32, 3); break;
			case 239: course_tree_mirror(17, 5); break;
			case 238: course_tree_mirror(29, 5); break;
			case 233: course_tree_mirror(10, 5); break;
			case 227: course_tree(35, 3); break;
			case 226: course_tree_mirror(25, 3); break;
			case 223: course_tree(33, 3); break;
			case 220: course_tree_mirror(25, 3); break;
			case 216: course_tree(32, 3); break;
			case 215: course_tree_mirror(14, 5); break;
			case 211: course_tree_mirror(29, 3); break;
			case 204: course_tree_mirror(15, 3); break;
			case 203: course_tree_mirror(9, 3); break;
			case 201: course_tree_mirror(4, 3); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 199: course_special(25, 3, 7, 80); break; //Goes to 31!
			case 193: course_tree(6, 3); break;
			case 192: course_tree(26, 5); break;
			case 182: course_tree(25, 5); break;
			case 181: course_tree(12, 5); break;
			case 178: course_tree(33, 3); break;
			case 175: course_tree_mirror(29, 3); break;
			case 170: course_tree_mirror(24, 3); break;
			case 169: course_tree_mirror(6, 5); break;
			case 164: course_tree_mirror(20, 3); course_tree(35, 3); break;
			case 163: course_tree(28, 3); break;
			case 155: course_tree_mirror(23, 3); break;
			case 151: course_tree_mirror(27, 5); break;
			case 150: course_tree_mirror(13, 3); break;
			case 149: course_special(19, 3, 7, 80); break; //Goes to 31!
			case 147: course_tree_mirror(8, 3); break;
			case 143: course_tree_mirror(6, 3); course_tree(34, 3); break;
			case 141: course_tree_mirror(15, 3); break;
			case 137: course_tree_mirror(4, 3); course_tree_mirror(10, 3); break;
			case 135: course_tree(18, 3); break;
			case 130: course_tree(13, 5); course_tree(33, 3); break;
			case 125: course_tree_mirror(8, 5); break;
			case 123: course_tree(33, 3); break;
			case 118: course_tree(35, 3); break;
			case 114: course_tree_mirror(27, 3); break;
			case 113: course_tree(36, 3); break;
			case 111: course_tree_mirror(30, 3); break;
			case 109: course_tree_mirror(6, 3); course_tree_mirror(23, 3); break;
			case 108: course_tree_mirror(18, 3); break;
			case 105: course_tree_mirror(28, 3); break;
			case 103: course_tree_mirror(20, 3); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_special(10, 3, 7, 80); break; //Goes to 31!
			case 93: course_tree(6, 3); break;
			case 90: course_tree(27, 3); break;
			case 85: course_tree(4, 3); course_tree_mirror(11, 3); course_tree(33, 4); break;
			case 80: course_tree(7, 3); course_tree(33, 3); break;
			case 79: course_tree(16, 3); break;
			case 76: course_tree_mirror(9, 3); break;
			//case 75: draw_title(54, "RIVERS OF DEATH"); break;
			case 72: course_tree_mirror(8, 3); break;
			case 71: course_tree_mirror(18, 3); break;
			case 68: course_tree_mirror(11, 3); break;
			case 64: course_tree_mirror(17, 3); break;
			case 61: course_tree(34, 3); break;
			case 59: course_tree_mirror(7, 3); break;
			case 57: course_tree(32, 3); break;
			case 54: course_tree_mirror(9, 3); course_tree(35, 3); break;
			case 49: course_special(20, 3, 7, 80); break; //Goes to 31!
			case 48: course_tree_mirror(6, 3); course_tree(34, 3); break;
			case 44: course_tree_mirror(7, 3); break;
			case 41: course_tree_mirror(29, 3); break;
			case 39: course_tree_mirror(10, 3); break;
			case 37: course_tree(33, 5); break;
			case 35: course_tree(6, 3); break;
			case 29: course_tree(12, 3); break;
			case 26: course_tree(8, 3); break;
			case 25: course_tree(33, 5); break;
			case 1: play_width_target = 72; break;
		}
	}
}

void course_heavenly_highlands() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 525: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: course_tree_mirror(7, 4); break;
			case 498: course_tree_mirror(21, 3); course_tree_mirror(28, 3); break;
			case 495: course_tree_mirror(13, 5); break;
			case 491: course_tree_mirror(29, 5); break;
			case 489: course_tree_mirror(2, 4); break;
			case 485: course_tree(33, 3); break;
			case 484: course_tree_mirror(17, 4); break;
			case 482: course_tree_mirror(29, 3); break;
			case 481: course_tree_mirror(10, 5); break;
			case 477: course_tree_mirror(27, 4); break;
			//case 475: hide_title(); break;	
			case 472: course_tree_mirror(29, 5); break;
			case 471: course_tree_mirror(4, 3); break;
			case 468: course_tree_mirror(7, 3); break;
			case 465: course_tree_mirror(27, 3); course_tree(34, 3); break;
			case 462: course_tree(10, 3); break;
			case 458: course_tree(22, 3); break;
			case 453: course_tree(29, 3); break;
			case 448: course_tree(10, 3); break;
			case 444: course_tree_mirror(18, 3); course_tree(33, 3); break;
			case 443: course_tree_mirror(10, 3); break;
			case 441: course_tree_mirror(29, 3); break;
			case 437: course_tree_mirror(22, 3); break;
			case 434: course_tree_mirror(29, 3); break;
			case 432: course_tree(5, 3); course_tree_mirror(12, 3); break;
			case 425: course_tree_mirror(26, 3); course_tree(33, 3); break;
			case 424: course_tree_mirror(10, 5); break;
			case 419: course_tree_mirror(24, 4); break;
			case 415: course_tree_mirror(28, 5); break;
			case 410: course_tree_mirror(8, 4); break;
			case 406: course_tree(34, 3); break;
			case 405: course_tree_mirror(9, 5); break;
			case 403: course_tree_mirror(30, 3); break;
			case 401: course_tree_mirror(11, 2); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 396: course_tree_mirror(27, 5); break;
			case 394: course_tree_mirror(6, 3); break;
			case 391: course_tree_mirror(9, 3); break;
			case 390: course_tree_mirror(20, 4); break;
			case 387: course_tree_mirror(2, 3); course_tree(33, 3); break;
			case 386: course_tree_mirror(8, 5); break;
			case 381: course_tree_mirror(21, 5); break;
			case 377: course_tree(35, 5); break;
			case 376: course_tree_mirror(4, 3); break;
			case 375: course_tree_mirror(22, 4); break;
			case 373: course_tree_mirror(7, 3); break;
			case 371: course_tree(35, 2); break;
			case 368: course_tree(31, 3); break;
			case 367: course_tree_mirror(18, 5); break;
			case 363: course_tree(33, 4); break;
			case 362: course_tree_mirror(10, 5); break;
			case 358: course_tree_mirror(26, 5); break;
			case 353: course_tree_mirror(13, 3); break;
			case 349: course_tree_mirror(19, 4); break;
			case 348: course_tree_mirror(7, 5); course_tree_mirror(27, 5); break;
			case 344: course_tree(35, 3); break;
			case 342: course_tree_mirror(6, 3); course_tree_mirror(13, 3); break;
			case 340: course_tree_mirror(28, 3); course_tree(35, 3); break;
			case 334: course_tree_mirror(24, 5); break;
			case 331: course_tree_mirror(8, 4); break;
			case 327: course_tree(35, 3); break;
			case 324: course_tree_mirror(10, 5); course_tree(35, 2); break;
			case 320: course_tree_mirror(26, 5); break;
			case 316: course_tree_mirror(15, 4); break;
			case 312: course_tree_mirror(24, 5); break;
			case 310: course_tree_mirror(7, 5); break;
			case 308: course_tree(35, 2); break;
			case 303: course_tree_mirror(4, 2); break;
			case 301: course_tree_mirror(7, 2); course_tree(31, 4); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 298: course_tree(21, 5); break;
			case 292: course_tree(2, 5); break;
			case 288: course_tree(28, 5); break;
			case 286: course_tree(8, 4); break;
			case 283: course_tree(17, 3); course_tree_mirror(24, 3); break;
			case 278: course_tree_mirror(9, 5); break;
			case 276: course_tree(31, 5); break;
			case 271: course_tree_mirror(15, 3); break;
			case 269: course_tree(35, 3); break;
			case 268: course_tree_mirror(11, 3); break;
			case 266: course_tree(31, 3); break;
			case 264: course_tree_mirror(15, 4); break;
			case 262: course_tree_mirror(28, 5); break;
			case 256: course_tree_mirror(10, 5); break;
			case 252: course_tree_mirror(26, 5); break;
			case 249: course_tree_mirror(9, 3); break;
			case 246: course_tree_mirror(12, 3); break;
			case 245: course_tree(33, 4); break;
			case 243: course_tree_mirror(25, 5); break;
			case 242: course_tree_mirror(7, 5); break;
			case 239: course_tree(35, 5); break;
			case 235: course_tree_mirror(6, 3); course_tree_mirror(13, 3); break;
			case 233: course_tree_mirror(30, 4); break;
			case 229: course_tree_mirror(22, 5); break;
			case 223: course_tree_mirror(10, 5); break;
			case 219: course_tree_mirror(26, 5); break;
			case 212: course_tree_mirror(25, 3); break;
			case 209: course_tree_mirror(7, 5); course_tree_mirror(21, 3); break;
			case 206: course_tree_mirror(29, 5); break;
			case 202: course_tree_mirror(6, 2); course_tree_mirror(13, 3); course_tree(35, 3); break;
			case 201: course_tree_mirror(30, 2); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 192: course_tree_mirror(26, 5); break;
			case 187: course_tree_mirror(10, 5); course_tree_mirror(20, 4); break;
			case 183: course_tree_mirror(26, 5); break;
			case 175: course_tree_mirror(19, 3); break;
			case 173: course_tree_mirror(7, 5); break;
			case 172: course_tree_mirror(28, 3); break;
			case 171: course_tree_mirror(18, 3); break;
			case 168: course_tree_mirror(20, 3); break;
			case 165: course_tree(34, 3); break;
			case 163: course_tree_mirror(8, 3); break;
			case 160: course_tree_mirror(2, 3); break;
			case 158: course_tree_mirror(25, 3); break;
			case 153: course_tree_mirror(10, 3); break;
			case 149: course_tree(26, 3); break;
			case 145: course_tree(6, 2); break;
			case 144: course_tree_mirror(2, 3); course_tree_mirror(28, 3); break;
			case 139: course_tree_mirror(7, 5); break;
			case 137: course_tree(34, 3); break;
			case 133: course_tree(35, 3); break;
			case 130: course_tree_mirror(14, 3); break;
			case 127: course_tree_mirror(10, 3); break;
			case 123: course_tree(31, 3); break;
			case 118: course_tree_mirror(11, 5); break;
			case 117: course_tree_mirror(20, 4); break;
			case 114: course_tree_mirror(27, 5); break;
			case 108: course_tree_mirror(16, 3); course_tree_mirror(23, 3); break;
			case 104: course_tree_mirror(8, 5); break;
			case 102: course_tree_mirror(30, 5); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 98: course_tree(35, 5); break;
			case 93: course_tree_mirror(5, 3); break;
			case 90: course_tree(8, 3); break;
			case 88: course_tree_mirror(27, 5); break;
			case 83: course_tree(13, 5); break;
			case 82: course_tree_mirror(23, 4); break;
			case 79: course_tree_mirror(29, 5); break;
			//case 75: draw_title(54, " HEAVENLY HIGHLANDS"); break;
			case 73: course_tree_mirror(7, 3); course_tree_mirror(21, 3); break;
			case 69: course_tree_mirror(10, 3); break;
			case 68: course_tree_mirror(26, 3); break;
			case 64: course_tree(35, 3); break;
			case 63: course_tree_mirror(2, 3); break;
			case 60: course_tree_mirror(9, 3); break;
			case 58: course_tree_mirror(2, 4); break;
			case 54: course_tree_mirror(23, 5); break;
			case 49: course_tree(33, 4); break;
			case 47: course_tree_mirror(14, 5); break;
			case 43: course_tree_mirror(30, 5); break;
			case 41: course_tree_mirror(5, 3); break;
			case 38: course_tree_mirror(8, 3); break;
			case 36: course_tree(33, 4); break;
			case 35: course_tree_mirror(24, 4); break;
			case 33: course_tree_mirror(11, 5); break;
			case 29: course_tree(22, 3); course_tree(29, 3); break;
			case 27: course_tree(16, 4); break;
			case 1: play_width_target = 72; break;
		}
	}
}
