void course_rising_from_the_depths() {
	int line = play_progress + SCREEN_HEIGHT - play_row;


	if (play_row == 20) {
		switch (play_progress) {
			case 505: next_course(); break;
			
			case 450: hide_title(); break;
			//case 50: 
			//	nosound();
			//	draw_title(61, "CATACOMBS OF DESPAIR"); 
			//break;
			case 250: play_course = 18; update_map(75, 4, RED, BLACK); break;
			case 1: play_width_target = 72; break;
		}
	}



    if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: course_tree_mirror(30, 3); break;
			case 497: course_tree_mirror(20, 2); break;
			case 496: course_tree_mirror(10, 2); break;
			case 494: course_tree(35, 3); break;
			case 493: course_tree_mirror(25, 2); break;
			case 492: course_tree_mirror(11, 2); break;
			case 488: course_tree_mirror(8, 2); course_tree_mirror(16, 2); break;
			case 487: course_tree(31, 2); break;
			case 486: course_tree_mirror(25, 3); break;
			case 482: course_tree_mirror(12, 2); course_tree_mirror(21, 2); break;
			case 480: course_tree_mirror(15, 3); break;
			case 478: course_tree_mirror(7, 2); course_tree_mirror(30, 4); break;
			case 475: hide_title(); break;	
			case 474: course_tree_mirror(6, 3); break;
			case 471: course_tree_mirror(19, 3); break;
			case 470: course_tree_mirror(27, 3); break;
			case 466: course_tree_mirror(7, 4); break;
			case 462: course_tree(35, 4); break;
			case 459: course_tree_mirror(21, 3); break;
			case 456: course_tree_mirror(13, 3); break;
			case 454: course_tree_mirror(8, 3); break;
			case 453: course_tree(33, 3); break;
			case 451: course_tree_mirror(27, 5); break;
			case 449: course_tree_mirror(19, 2); break;
			case 448: course_tree(27, 3); break;
			case 447: course_tree_mirror(20, 3); break;
			case 445: course_tree_mirror(7, 2); break;
			case 442: course_tree_mirror(4, 4); break;
			case 441: course_tree(33, 4); break;
			case 437: course_tree_mirror(4, 2); break;
			case 436: course_tree_mirror(13, 3); break;
			case 435: course_tree(35, 2); break;
			case 434: course_tree_mirror(7, 5); break;
			case 430: course_tree_mirror(7, 2); course_tree_mirror(18, 2); break;
			case 429: course_tree(31, 3); break;
			case 427: course_tree_mirror(5, 3); break;
			case 426: course_tree(34, 3); break;
			case 424: course_tree_mirror(11, 4); break;
			case 422: course_tree(32, 3); break;
			case 419: course_tree_mirror(6, 3); course_tree_mirror(12, 2); course_tree_mirror(28, 2); break;
			case 415: course_tree_mirror(5, 3); break;
			case 413: course_tree_mirror(26, 2); break;
			case 411: course_tree_mirror(6, 2); course_tree_mirror(15, 2); break;
			case 409: course_tree_mirror(25, 3); break;
			case 408: course_tree_mirror(11, 3); course_tree(34, 4); break;
			case 405: course_tree_mirror(7, 4); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 399: course_tree_mirror(29, 2); break;
			case 398: course_tree(16, 2); break;
			case 396: course_tree_mirror(6, 2); course_tree(34, 3); break;
			case 395: course_tree(14, 3); break;
			case 393: course_tree_mirror(24, 3); break;
			case 392: course_tree(8, 3); break;
			case 389: course_tree_mirror(30, 2); break;
			case 387: course_tree_mirror(20, 2); break;
			case 386: course_tree_mirror(9, 4); break;
			case 384: course_tree_mirror(26, 3); break;
			case 382: course_tree_mirror(9, 3); break;
			case 379: course_tree_mirror(17, 2); break;
			case 375: course_tree_mirror(12, 4); course_tree_mirror(30, 2); break;
			case 374: course_tree_mirror(5, 2); break;
			case 370: course_tree_mirror(7, 3); course_tree_mirror(16, 3); break;
			case 368: course_tree_mirror(27, 3); break;
			case 367: course_tree(34, 4); break;
			case 364: course_tree_mirror(6, 2); break;
			case 362: course_tree_mirror(15, 2); course_tree(34, 4); break;
			case 360: course_tree_mirror(24, 2); break;
			case 358: course_tree_mirror(9, 2); break;
			case 352: course_tree_mirror(10, 2); break;
			case 350: course_tree_mirror(5, 3); course_tree(34, 4); break;
			case 349: course_tree(21, 4); break;
			case 346: course_tree_mirror(11, 3); break;
			case 342: course_tree_mirror(5, 3); break;
			case 341: course_tree_mirror(21, 4); break;
			case 338: course_tree_mirror(10, 2); break;
			case 334: course_tree_mirror(15, 2); course_tree_mirror(26, 2); break;
			case 332: course_tree_mirror(10, 2); break;
			case 331: course_tree(32, 2); break;
			case 329: course_tree_mirror(30, 2); break;
			case 328: course_tree_mirror(13, 2); course_tree_mirror(22, 2); break;
			case 325: course_tree_mirror(5, 2); course_tree_mirror(16, 3); break;
			case 324: course_tree(34, 4); break;
			case 321: course_tree_mirror(7, 3); break;
			case 320: course_tree_mirror(12, 2); course_tree_mirror(25, 4); break;
			case 317: course_tree_mirror(5, 3); course_tree_mirror(19, 2); break;
			case 314: course_tree_mirror(25, 2); break;
			case 311: course_tree_mirror(6, 3); break;
			case 310: course_tree(11, 3); break;
			case 308: course_tree_mirror(19, 3); break;
			case 307: course_tree_mirror(9, 2); break;
			case 305: course_tree_mirror(11, 4); course_tree_mirror(29, 2); break;
			case 302: course_tree_mirror(4, 3); course_tree(35, 4); break;
			case 301: course_tree_mirror(18, 3); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 299: course_tree_mirror(9, 2); break;
			case 296: course_tree_mirror(29, 2); break;
			case 294: course_tree_mirror(7, 3); course_tree_mirror(20, 2); break;
			case 292: course_tree(34, 3); break;
			case 290: course_tree_mirror(9, 2); break;
			case 288: course_tree(35, 3); break;
			case 287: course_tree_mirror(6, 3); course_tree_mirror(20, 3); course_tree_mirror(29, 3); break;
			case 283: course_tree_mirror(18, 2); course_tree_mirror(27, 3); break;
			case 282: course_tree_mirror(10, 4); break;
			case 279: course_tree_mirror(10, 2); break;
			case 278: course_tree_mirror(26, 2); break;
			case 276: course_tree_mirror(6, 3); break;
			case 273: course_tree(33, 3); break;
			case 272: course_tree_mirror(17, 3); break;
			case 271: course_tree_mirror(10, 3); break;
			case 268: course_tree_mirror(7, 3); break;
			case 266: course_tree_mirror(28, 3); break;
			case 264: course_tree_mirror(16, 2); break;
			case 263: course_tree_mirror(10, 2); break;
			case 261: course_tree_mirror(9, 3); break;
			case 258: course_tree(34, 3); break;
			case 257: course_tree_mirror(6, 3); break;
			case 253: course_tree_mirror(18, 2); course_tree_mirror(28, 2); break;
			case 252: course_tree(35, 3); break;
			case 251: course_tree_mirror(6, 3); break;
			case 250: course_tree_mirror(16, 3); course_tree_mirror(29, 3); break;
			case 247: course_tree(10, 2); break;
			case 245: course_tree_mirror(4, 3); break;
			case 241: course_tree(8, 3); course_tree(31, 3); break;
			case 240: course_tree_mirror(19, 3); break;
			case 237: course_tree_mirror(11, 2); break;
			case 236: course_tree(4, 3); course_tree(33, 3); break;
			case 235: course_tree_mirror(28, 3); break;
			case 233: course_tree_mirror(13, 3); break;
			case 232: course_tree_mirror(5, 3); break;
			case 229: course_tree_mirror(28, 3); break;
			case 228: course_tree_mirror(11, 3); break;
			case 227: course_tree(33, 3); break;
			case 224: course_tree_mirror(10, 2); course_tree_mirror(28, 3); break;
			case 221: course_tree_mirror(6, 4); break;
			case 218: course_tree_mirror(29, 3); break;
			case 215: course_tree_mirror(5, 4); break;
			case 213: course_tree_mirror(10, 3); break;
			case 212: course_tree(33, 2); break;
			case 211: course_tree_mirror(23, 3); break;
			case 207: course_tree_mirror(29, 2); break;
			case 206: course_tree_mirror(10, 3); course_tree_mirror(23, 2); break;
			case 204: course_tree_mirror(28, 3); break;
			case 201: course_tree(32, 2); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 198: course_tree_mirror(27, 4); break;
			case 197: course_tree_mirror(7, 4); break;
			case 194: course_tree(34, 3); break;
			case 191: course_tree_mirror(22, 2); break;
			case 190: course_tree(32, 3); break;
			case 188: course_tree_mirror(7, 2); course_tree_mirror(26, 3); break;
			case 182: course_tree(31, 2); break;
			case 181: course_tree_mirror(13, 2); break;
			case 180: course_tree_mirror(6, 4); break;
			case 177: course_tree_mirror(9, 2); break;
			case 176: course_tree_mirror(15, 3); break;
			case 175: course_tree_mirror(6, 2); break;
			case 173: course_tree_mirror(10, 3); course_tree_mirror(27, 2); break;
			case 169: course_tree_mirror(6, 2); course_tree_mirror(24, 4); break;
			case 163: course_tree_mirror(27, 3); break;
			case 160: course_tree_mirror(16, 2); break;
			case 158: course_tree_mirror(30, 3); break;
			case 156: course_tree_mirror(4, 3); course_tree(34, 3); break;
			case 153: course_tree_mirror(6, 3); course_tree_mirror(15, 3); break;
			case 151: course_tree(25, 2); break;
			case 149: course_tree_mirror(8, 2); break;
			case 146: course_tree_mirror(5, 3); course_tree_mirror(18, 2); break;
			case 145: course_tree_mirror(24, 3); course_tree(31, 4); break;
			case 140: course_tree_mirror(8, 2); course_tree_mirror(25, 3); break;
			case 139: course_tree(35, 3); break;
			case 138: course_tree_mirror(7, 4); break;
			case 136: course_tree_mirror(29, 3); break;
			case 132: course_tree_mirror(16, 4); break;
			case 128: course_tree(10, 2); break;
			case 127: course_tree_mirror(4, 3); course_tree_mirror(19, 5); course_tree_mirror(25, 2); break;
			case 125: course_tree_mirror(11, 3); break;
			case 124: course_tree_mirror(19, 3); break;
			case 123: course_tree_mirror(5, 3); break;
			case 121: course_tree_mirror(13, 2); break;
			case 119: course_tree(35, 4); break;
			case 112: course_tree_mirror(29, 2); break;
			case 109: course_tree_mirror(7, 3); break;
			case 108: course_tree_mirror(24, 3); break;
			case 106: course_tree_mirror(29, 2); break;
			case 105: course_tree_mirror(21, 2); course_tree(35, 3); break;
			case 104: course_tree_mirror(7, 2); break;
			case 102: course_tree_mirror(5, 3); course_tree_mirror(26, 3); break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_tree(35, 3); break;
			case 98: course_tree_mirror(19, 3); break;
			case 97: course_tree_mirror(30, 2); break;
			case 93: course_tree_mirror(6, 2); break;
			case 92: course_tree(35, 3); break;
			case 89: course_tree_mirror(11, 4); break;
			case 88: course_tree(32, 3); break;
			case 86: course_tree_mirror(4, 3); course_tree_mirror(23, 2); break;
			case 82: course_tree_mirror(30, 3); break;
			case 81: course_tree(7, 5); break;
			case 80: course_tree_mirror(14, 3); break;
			case 77: course_tree_mirror(7, 2); break;
			case 74: course_tree_mirror(11, 3); break;
			case 73: course_tree(34, 3); break;
			case 69: course_tree_mirror(7, 3); break;
			case 68: course_tree_mirror(30, 2); break;
			case 65: course_tree_mirror(4, 3); course_tree(10, 2); break;
			case 64: course_tree(15, 3); course_tree(35, 3); break;
			case 63: course_tree_mirror(8, 3); break;
			case 61: course_tree_mirror(28, 4); break;
			case 53: course_tree_mirror(10, 3); course_tree(32, 4); break;
			case 51: course_tree(5, 2); course_tree(17, 2); break;
			case 49: course_tree_mirror(12, 3); break;
			case 45: course_tree_mirror(7, 4); break;
			case 42: course_tree(33, 2); break;
			case 39: course_tree_mirror(9, 2); break;
			case 37: course_tree_mirror(27, 2); break;
			case 34: course_tree(16, 2); break;
			case 30: course_tree(9, 4); break;
		}
	}
}

void course_catacombs_of_despair() {
	int line = play_progress + SCREEN_HEIGHT - play_row;

	if (play_row == 20) {
		switch (play_progress) {
			case 505: next_course(); break;
			
			case 450: hide_title(); break;
			//case 50: 
			//	nosound();
			//	draw_title(55, "RISING FROM THE DEPTHS");
			//break;
			case 250: play_course = 16; update_map(75, 4, RED, BLACK); break;
			case 1: play_width_target = 72; break;
		}
	}


    if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: course_tree_mirror(10, 5); course_tree_mirror(30, 3); break;
			case 498: course_tree(35, 4); break;
			case 493: course_tree_mirror(5, 3); course_tree_mirror(28, 5); break;
			case 492: course_tree_mirror(10, 4); break;
			case 484: course_tree_mirror(5, 3); course_tree_mirror(17, 5); break;
			case 483: course_tree(33, 4); break;
			case 479: course_tree_mirror(9, 2); break;
			case 477: course_tree_mirror(19, 2); break;
			case 476: course_tree(35, 2); break;
			case 475: hide_title(); break;	
			case 473: course_tree_mirror(10, 2); break;
			case 471: course_tree_mirror(16, 2); break;
			case 470: course_tree_mirror(23, 5); break;
			case 467: course_tree_mirror(8, 5); break;
			case 461: course_tree(10, 4); break;
			case 459: course_tree_mirror(19, 5); break;
			case 458: course_tree_mirror(30, 5); break;
			case 456: course_tree(11, 3); break;
			case 448: course_tree_mirror(8, 5); break;
			case 442: course_tree_mirror(19, 5); break;
			case 439: course_tree_mirror(8, 3); break;
			case 436: course_tree(22, 4); break;
			case 435: course_tree_mirror(12, 5); break;
			case 434: course_tree_mirror(30, 5); break;
			case 428: course_tree_mirror(25, 5); break;
			case 420: course_tree_mirror(16, 5); course_tree(31, 4); break;
			case 413: course_tree(32, 5); break;
			case 411: course_tree_mirror(12, 5); break;
			case 408: course_tree_mirror(24, 3); break;
			case 405: course_tree_mirror(28, 4); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 399: course_tree(32, 4); break;
			case 394: course_tree_mirror(10, 4); break;
			case 392: course_tree_mirror(29, 4); break;
			case 387: course_tree_mirror(13, 3); break;
			case 385: course_tree(25, 4); break;
			case 382: course_tree_mirror(15, 4); break;
			case 381: course_tree(32, 4); break;
			case 375: course_tree_mirror(29, 3); break;
			case 370: course_tree_mirror(11, 4); break;
			case 369: course_tree(31, 4); break;
			case 364: course_tree_mirror(24, 4); break;
			case 363: course_tree_mirror(16, 4); break;
			case 361: course_tree(34, 3); break;
			case 357: course_tree(32, 4); break;
			case 354: course_tree_mirror(11, 4); break;
			case 349: course_tree_mirror(26, 4); break;
			case 348: course_tree_mirror(18, 4); break;
			case 343: course_tree(34, 4); break;
			case 342: course_tree_mirror(11, 4); course_tree_mirror(24, 4); break;
			case 332: course_tree(15, 4); break;
			case 331: course_tree_mirror(25, 4); course_tree(34, 4); break;
			case 325: course_tree(28, 3); break;
			case 320: course_tree_mirror(8, 4); break;
			case 318: course_tree_mirror(23, 4); break;
			case 314: course_tree_mirror(13, 4); break;
			case 313: course_tree_mirror(6, 3); break;
			case 308: course_tree(34, 4); break;
			case 306: course_tree_mirror(11, 4); break;
			case 303: course_tree_mirror(19, 4); break;
			case 302: course_tree(33, 4); break;	
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 296: course_tree_mirror(27, 3); break;
			case 293: course_tree_mirror(8, 5); break;
			case 292: course_tree(34, 5); break;
			case 289: course_tree_mirror(20, 5); break;
			case 286: course_tree(35, 5); break;
			case 279: course_tree_mirror(14, 3); break;
			case 278: course_tree(28, 5); break;
			case 277: course_tree_mirror(6, 5); break;
			case 272: course_tree_mirror(17, 5); break;
			case 268: course_tree_mirror(10, 5); break;
			case 266: course_tree(34, 4); break;
			case 261: course_tree_mirror(7, 5); break;
			case 259: course_tree_mirror(20, 3); course_tree(35, 5); break;
			case 255: course_tree_mirror(6, 4); break;
			case 254: course_tree_mirror(30, 5); break;
			case 249: course_tree_mirror(14, 5); break;
			case 248: course_tree(35, 3); break;
			case 239: course_tree_mirror(28, 5); break;
			case 234: course_tree(35, 4); break;
			case 232: course_tree_mirror(17, 5); break;
			case 231: course_tree_mirror(8, 5); break;
			case 225: course_tree_mirror(11, 5); break;
			case 220: course_tree_mirror(9, 4); break;
			case 219: course_tree(32, 5); break;
			case 218: course_tree_mirror(21, 5); break;
			case 215: course_tree_mirror(6, 3); break;
			case 212: course_tree(26, 3); course_tree(34, 4); break;
			case 208: course_tree(13, 5); break;
			case 202: course_tree(34, 3); break;
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 198: course_tree_mirror(8, 4); break;
			case 197: course_tree_mirror(21, 5); course_tree(35, 4); break;
			case 190: course_tree_mirror(7, 5); course_tree_mirror(29, 5); break;
			case 185: course_tree_mirror(6, 3); break;
			case 184: course_tree(32, 3); break;
			case 183: course_tree_mirror(16, 4); break;
			case 179: course_tree_mirror(11, 5); course_tree_mirror(20, 5); break;
			case 177: course_tree(33, 5); break;
			case 169: course_tree(33, 4); break;
			case 168: course_tree_mirror(8, 5); break;
			case 161: course_tree_mirror(7, 4); course_tree_mirror(15, 5); break;
			case 157: course_tree_mirror(24, 4); break;
			case 156: course_tree(33, 3); break;
			case 155: course_tree_mirror(11, 3); break;
			case 153: course_tree_mirror(6, 5); break;
			case 150: course_tree_mirror(29, 5); break;
			case 144: course_tree(33, 4); break;
			case 141: course_tree_mirror(20, 5); break;
			case 137: course_tree_mirror(29, 5); break;
			case 135: course_tree_mirror(22, 3); break;
			case 131: course_tree(15, 4); break;
			case 130: course_tree_mirror(7, 5); break;
			case 124: course_tree_mirror(20, 5); break;
			case 123: course_tree(35, 3); break;
			case 118: course_tree_mirror(8, 5); break;
			case 116: course_tree_mirror(20, 4); break;
			case 111: course_tree_mirror(10, 5); break;
			case 107: course_tree(33, 5); break;
			case 105: course_tree_mirror(8, 4); break;
			case 102: course_tree_mirror(24, 5); break;
			case 101: course_tree(33, 4); break;
		}
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_tree_mirror(7, 3); break;
			case 95: course_tree(35, 5); break;
			case 94: course_tree_mirror(25, 5); break;
			case 90: course_tree_mirror(7, 5); break;
			case 89: course_tree(32, 4); break;
			case 86: course_tree_mirror(26, 5); break;
			case 82: course_tree_mirror(14, 5); break;
			case 80: course_tree(35, 4); break;
			case 76: course_tree(32, 5); break;
			case 71: course_tree_mirror(17, 5); break;
			case 66: course_tree_mirror(8, 4); break;
			case 64: course_tree_mirror(19, 5); break;
			case 60: course_tree_mirror(13, 3); break;
			case 59: course_tree_mirror(6, 5); course_tree_mirror(19, 5); break;
			case 57: course_tree(35, 4); break;
			case 52: course_tree_mirror(7, 5); break;
			case 50: course_tree(30, 5); break;
			case 46: course_tree_mirror(9, 5); break;
			case 40: course_tree_mirror(5, 4); break;
			case 36: course_tree(24, 5); course_tree(35, 5); break;
			case 31: course_tree(35, 3); break;
			case 30: course_tree_mirror(23, 4); break;
			case 29: course_tree(30, 5); break;
		}
	}
}
