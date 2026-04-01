void course_valley_of_death() {
	
	int line = play_progress + SCREEN_HEIGHT - play_row;

	//if (line < 500) {
	//	play_progress = 500 - SCREEN_HEIGHT + play_row;
	//}
	
	
    if ((line > 900) && (line < 1025)) {
        switch (line) {
			case 1020: next_course(); break;
			
			case 986: course_tree_quick(8); break;
			case 985: course_tree_quick(18); break;
			case 984: course_tree_quick(14); break;
			case 983: course_tree_quick(9); break;
			case 982: course_tree_quick(4); break;
			case 981: course_tree_quick(23); break;
			case 980: course_tree_quick(16); course_tree_quick(28); break;
			case 979: course_tree_quick(13); break;
			case 977: course_tree_quick(10); break;
			case 501: hide_title(); break;
			case 970: course_tree_quick(6); break;
			case 966: course_tree_quick(14); break;
			case 962: course_tree_quick(21); break;
			case 955: course_tree_quick(16); course_tree_quick(25); break;
			case 953: course_tree_quick(20); break;
			case 951: course_tree_quick(8); break;
			case 949: course_tree_quick(23); break;
			case 947: course_tree_quick(9); break;
			case 946: course_tree_quick(19); break;
			case 943: course_tree_quick(6); break;
			case 941: course_tree_quick(9); break;
			case 940: course_tree_quick(15); break;
			case 938: course_tree_quick(7); break;
			case 936: course_tree_quick(22); break;
			case 933: course_tree_quick(6); break;
			case 931: course_tree_quick(19); break;
			case 930: course_tree_quick(15); course_tree_quick(24); break;
			case 929: course_tree_quick(7); break;
			case 922: course_tree_quick(20); break;
			case 917: course_tree_quick(9); break;
			case 910: course_tree_quick(13); break;
			case 907: course_tree_quick(16); break;
			case 906: course_tree_quick(8); break;
			case 901: course_tree_quick(20); break;
		}
	} else if ((line > 800) && (line < 900)) {
        switch (line) {
			case 893: course_tree_quick(22); break;
			case 887: course_tree_quick(18); break;
			case 885: course_tree_quick(22); break;
			case 882: course_tree_quick(14); break;
			case 879: course_tree_quick(11); break;
			case 876: course_tree_quick(25); break;
			case 875: course_tree_quick(7); break;
			case 874: course_tree_quick(22); break;
			case 872: course_tree_quick(16); break;
			case 869: course_tree_quick(14); course_tree_quick(28); break;
			case 862: course_tree_quick(23); break;
			case 860: course_tree_quick(12); break;
			case 859: course_tree_quick(24); break;
			case 849: course_tree_quick(19); break;
			//case 848: course_tree(23, 4); break;
			//case 843: course_tree_quick(5); break;
			case 842: course_tree_quick(16); break;
			case 841: course_tree(10, 4); break;
			case 835: course_tree_quick(15); break;
			case 830: course_tree_quick(9); break;
			case 827: course_tree_quick(5); course_tree_quick(13); break;
			case 824: course_tree_quick(15); break;
			case 817: course_tree_quick(8); course_tree_quick(17); break;
			case 814: course_tree_quick(11); break;
			case 813: course_tree_quick(19); break;
			case 810: course_tree_quick(13); break;
			case 807: course_tree_quick(18); break;
			case 803: course_tree_quick(16); break;
			case 802: course_tree_quick(12); break;
		}
	} else if ((line > 700) && (line < 800)) {
        switch (line) {
			case 799: course_tree_quick(21); break;
			case 796: course_tree_quick(23); break;
			case 795: course_tree_quick(9); break;
			case 786: course_tree_quick(16); course_tree_quick(28); break;
			case 782: course_tree_quick(11); break;
			case 780: course_tree_quick(25); break;
			case 778: course_tree_quick(21); break;
			case 776: course_tree_quick(7); course_tree_quick(16); break;
			case 773: course_tree_quick(4); course_tree_quick(14); break;
			case 766: course_tree_quick(23); break;
			case 762: course_tree_quick(18); break;
			case 758: course_tree_quick(13); break;
			case 752: course_tree_quick(19); break;
			case 749: course_tree_quick(12); break;
			case 745: course_tree_quick(5); break;
			case 743: course_tree_quick(16); break;
			case 741: course_tree_quick(12); break;
			case 737: course_tree_quick(6); break;
			case 734: course_tree_quick(11); break;
			case 732: course_tree_quick(19); break;
			case 731: course_tree_quick(23); break;
			case 729: course_tree_quick(9); break;
			case 728: course_tree_quick(21); break;
			case 727: course_tree_quick(6); break;
			case 724: course_tree_quick(24); break;
			case 722: course_tree_quick(20); course_tree_quick(28); break;
			case 718: course_tree_quick(13); break;
			case 716: course_tree_quick(24); break;
			case 714: course_tree_quick(10); break;
			case 712: course_tree_quick(17); break;
			case 709: course_tree_quick(14); break;
			case 708: course_tree_quick(9); course_tree_quick(19); break;
			case 703: course_tree_quick(25); break;
		}
	} else if ((line > 600) && (line < 700)) {
        switch (line) {
			case 696: course_tree_quick(23); break;
			case 691: course_tree_quick(21); break;
			case 686: course_tree_quick(19); break;
			case 683: course_tree_quick(7); course_tree_quick(29); break;
			case 682: course_tree_quick(17); break;
			case 678: course_tree_quick(5); course_tree_quick(10); course_tree_quick(21); break;
			case 675: course_tree_quick(13); break;
			case 674: course_tree_quick(23); break;
			case 671: course_tree_quick(4); course_tree_quick(9); break;
			case 669: course_tree_quick(19); break;
			case 667: course_tree_quick(15); course_tree_quick(28); break;
			case 664: course_tree_quick(18); break;
			case 663: course_tree_quick(13); break;
			case 661: course_tree_quick(16); break;
			case 658: course_tree_quick(10); course_tree_quick(18); break;
			case 654: course_tree_quick(11); break;
			case 649: course_tree_quick(16); course_tree_quick(23); break;
			case 646: course_tree_quick(4); break;
			case 644: course_tree_quick(20); break;
			case 641: course_tree_quick(11); break;
			case 637: course_tree_quick(24); break;
			case 635: course_tree_quick(13); course_tree_quick(21); break;
			case 632: course_tree_quick(15); course_tree_quick(23); break;
			case 625: course_tree_quick(19); break;
			case 623: course_tree_quick(13); break;
			case 617: course_tree_quick(4); course_tree_quick(9); break;
			case 614: course_tree_quick(12); break;
			case 609: course_tree_quick(18); course_tree_quick(23); break;
			case 605: course_tree_quick(10); course_tree_quick(20); break;
		}
	} else if ((line > 500) && (line < 600)) {
        switch (line) {
			case 597: course_tree_quick(17); break;
			case 595: course_tree_quick(8); break;
			case 585: course_tree_quick(11); break;
			case 581: course_tree_quick(17); course_tree_quick(28); break;
			case 576: course_tree_quick(20); break;
			case 575: draw_title(51, "THE VALLEY OF THE SHADOW OF DEATH"); break;
			case 574: course_tree_quick(10); break;
			case 572: course_tree_quick(14); break;
			case 565: course_tree_quick(5); break;
			case 564: course_tree_quick(13); break;
			case 562: course_tree_quick(9); break;
			case 560: course_tree_quick(21); break;
			case 559: course_tree_quick(4); break;
			case 557: course_tree_quick(23); break;
			case 554: course_tree_quick(9); break;
			case 552: course_tree_quick(12); break;
			case 550: course_tree_quick(8); break;
			case 544: course_tree_quick(18); break;
			case 540: course_tree_quick(23); break;
			case 535: course_tree_quick(4); break;
			case 534: course_tree_quick(16); break;
			case 531: course_tree_quick(7); break;
			case 529: course_tree_quick(19); break;
			case 528: course_tree_quick(8); break;
			case 525: course_tree_quick(11); break;
			case 520: course_tree_quick(16); break;
			case 517: course_tree_quick(21); break;
			case 515: course_tree_quick(11); break;
			
			case 512: update_map(75, 4, RED, BLACK); break;
			case 511: play_course = 14; break;
			case 510: play_width_target = 30; break;
			case 509: course_tree_quick(16); break;
			case 507: course_tree_quick(23); break;
			case 503: course_tree_quick(11); course_tree_quick(26); break;
			

			
			
			
			
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 495: course_tree_quick(19); break;
			case 489: course_tree_quick(8); break;
			case 482: course_tree_quick(5); course_tree_quick(12); break;
			case 480: course_tree_quick(8); break;
			case 479: course_tree_quick(14); break;
			case 475: hide_title(); break;
			case 472: course_tree_quick(23); break;
			case 466: course_tree_quick(15); break;
			case 461: course_tree_quick(12); break;
			case 454: course_tree_quick(6); break;
			case 453: course_tree_quick(14); break;
			case 452: course_tree_quick(19); break;
			case 451: course_tree_quick(10); break;
			case 447: course_tree_quick(5); break;
			case 440: course_tree_quick(4); course_tree_quick(29); break;
			case 436: course_tree_quick(8); course_tree_quick(22); break;
			case 435: course_tree_quick(2); break;
			case 432: course_tree_quick(4); break;
			case 430: course_tree_quick(16); break;
			case 428: course_tree_quick(11); break;
			case 423: course_tree_quick(8); course_tree_quick(17); break;
			case 419: course_tree_quick(12); break;
			case 413: course_tree_quick(8); break;
			case 409: course_tree_quick(12); break;
			case 407: course_tree_quick(24); break;
			case 401: course_tree_quick(18); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
			case 395: course_tree_quick(19); break;
			case 390: course_tree_quick(22); break;
			case 382: course_tree_quick(5); course_tree_quick(27); break;
			case 377: course_tree_quick(8); break;
			case 376: course_tree_quick(17); break;
			case 373: course_tree_quick(11); break;
			case 371: course_tree(19, 5); break;
			case 367: course_tree_quick(19); course_tree_quick(29); break;
			case 358: course_tree_quick(20); break;
			case 353: course_tree_quick(2); course_tree_quick(19); break;
			case 351: course_tree_quick(12); break;
			case 349: course_tree_quick(5); course_tree_quick(21); break;
			case 348: course_tree_quick(14); break;
			case 345: course_tree_quick(7); break;
			case 338: course_tree_quick(8); break;
			case 333: course_tree_quick(9); break;
			case 332: course_tree_quick(14); course_tree_quick(19); break;
			case 330: course_tree_quick(5); break;
			case 329: course_tree_quick(16); break;
			case 325: course_tree_quick(3); break;
			case 324: course_tree_quick(19); course_tree_quick(28); break;
			case 322: course_tree_quick(4); break;
			case 312: course_tree_quick(9); break;
			case 304: course_tree_quick(15); break;
			case 303: course_tree_quick(23); break;
			case 301: course_tree_quick(16); break;
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
			case 290: course_tree_quick(2); break;
			case 288: course_tree_quick(16); break;
			case 287: course_tree_quick(8); break;
			case 284: course_tree_quick(13); break;
			case 277: course_tree_quick(18); course_tree_quick(23); break;
			case 273: course_tree_quick(10); break;
			case 270: course_tree_quick(26); break;
			case 257: course_tree_quick(18); break;
			case 245: course_tree_quick(18); break;
			case 233: course_tree_quick(18); course_tree_quick(23); break;
			case 223: course_tree_quick(23); break;
			case 220: course_tree_quick(20); break;
			case 214: course_tree_quick(14); break;
			case 211: course_tree_quick(8); break;
			case 210: course_tree_quick(25); break;
			case 207: course_tree_quick(13); break;
		
//case 205: course_flag(7, 4); break;
		
//case 206: course_flag(7, 4); break;
		
//case 209: course_flag(7, 4); break;
		
//case 208: course_flag(7, 4); break;
			
		}
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 196: course_tree_quick(20); break;
			case 191: course_tree_quick(13); course_tree_quick(28); break;
			case 181: course_tree_quick(17); break;
			case 177: course_tree_quick(23); break;
			case 176: course_tree_quick(12); break;
			case 175: course_tree_quick(19); break;
			case 174: course_tree_quick(8); break;
			case 172: course_tree_quick(16); course_tree_quick(21); break;
			case 171: course_tree_quick(7); break;
			case 169: course_tree_quick(10); course_tree_quick(19); break;
			case 161: course_tree_quick(13); break;
			case 160: course_tree(4, 2); break;
			case 156: course_tree_quick(4); break;
			case 153: course_tree_quick(15); break;
			case 152: course_tree_quick(2); break;
			case 150: course_tree_quick(17); break;
			case 141: course_tree_quick(23); break;
			case 135: course_tree_quick(8); break;
			case 123: course_tree_quick(12); break;
			case 116: course_tree_quick(7); break;
			case 113: course_tree_quick(4); break;
			case 112: course_tree_quick(25); break;
			case 105: course_tree_quick(7); course_tree_quick(24); break;
			case 103: course_tree_quick(21); break;
			
			//case 108: course_flag(7, 4); break;
			//case 107: course_flag(7, 4); break;
			
			//case 106: course_flag(7, 4); break;
			
			//case 102: course_flag(7, 4); break;
			
			case 101: course_tree_quick(15); break;
		}
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			case 99: course_tree_quick(8); break;
			case 98: course_tree_quick(13); break;
			case 93: course_tree_quick(15); break;
			case 90: course_tree_quick(18); break;
			case 86: course_tree_quick(22); break;
			case 78: course_tree_quick(15); course_tree_quick(20); break;
			case 75: draw_title(51, "THE VALLEY OF HUMILIATION"); break;
			case 73: course_tree_quick(24); break;
			case 72: course_tree_quick(9); break;
			case 69: course_tree_quick(12); course_tree_quick(19); break;
			case 64: course_tree_quick(8); break;
			case 61: course_tree_quick(9); break;
			case 58: course_tree_quick(10); break;
			case 50: course_tree_quick(22); break;
			case 43: course_tree_quick(7); break;
			case 40: course_tree_quick(4); break;
			case 36: course_tree_quick(29); break;
			case 39: course_tree_quick(13); break;
			case 35: course_tree_quick(20); break;
			case 34: course_tree_quick(24); break;
			case 31: course_tree_quick(17); break;
			case 28: course_tree_quick(12); break;
			//case 25: order_skiers(); break;
			//case 2: update_map(75, 4, RED, map_colour); break;
			case 1: play_width_target = 30; break;
			
		}
	}
}
