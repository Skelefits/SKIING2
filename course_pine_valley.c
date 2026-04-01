void course_pine_valley() {
    int line = play_progress + SCREEN_HEIGHT - play_row;
    

	course_pine_valley_test(line);
}

void course_pine_valley_test(int line) {
    if ((line > 0) && (line < 370)) {
        switch (line) {
            // Set initial width
            case 1: play_width_target = 80; break;
            
            // Starting gates - straight
            case 5: course_flag(40, 32); break;
			case 10: course_flag(40, 30); break;
			case 15: course_flag(40, 28); break;
			case 20: course_flag(40, 26); break;
			case 25: course_flag(40, 24); break;
			case 30: course_flag(40, 22); break;
			case 35: course_flag(40, 20); break;
            case 40: course_flag(40, 18); break;
			case 45: course_flag(40, 16); break;
            case 50: course_flag(40, 14); break;
			case 55: course_flag(40, 12); break;
            case 60: course_flag(40, 10); break;
			case 65: course_flag(40, 8); break;
            case 70: course_flag(40, 6); break;
            case 75: course_flag(40, 4); break;
			
			case 80: play_width_target = 70; break;
            
            case 85: course_flag(35, 4); break;
            case 95: course_flag(30, 4); break;
            case 105: course_flag(32, 4); break;
            case 115: course_flag(29, 4); break;
            case 125: course_flag(26, 4); break;
            
            // Wide sweeping section
            case 135: course_flag(23, 4); break;
            case 145: course_flag(25, 4); break;
            case 155: course_flag(27, 4); break;
            case 165: course_flag(29, 4); break;
            case 175: course_flag(31, 4); break;
            case 185: course_flag(29, 4); break;
            case 195: course_flag(27, 4); break;
            case 205: course_flag(25, 4); break;
            
            // Gentle S-curve
            case 215: course_flag(27, 4); break;
            case 225: course_flag(29, 4); break;
            case 235: course_flag(31, 4); break;
            case 245: course_flag(29, 4); break;
            case 255: course_flag(27, 4); break;
            case 265: course_flag(25, 4); break;
            
            // Final approach
            case 275: course_flag(25, 4); break;
            case 285: course_flag(25, 4); break;
			
            // Begin gentle slalom
            case 295: course_flag(25, 4); break;
            case 305: course_flag(27, 4); break;
            case 315: course_flag(32, 4); break;
            case 325: course_flag(29, 4); break;
            case 335: course_flag(26, 4); break;
            case 345: course_flag(23, 4); break;
			
        }
    }
}
