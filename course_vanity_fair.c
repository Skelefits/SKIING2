void course_corridors_of_comfort() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: draw_text(61, 2, "                    ", 1, RED, hud_colour); break;
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
			case 50: draw_text(61, 2, "CORRIDORS OF COMFORT", 1, RED, hud_colour); break;
			case 1: play_width_target = 50; break;
		}
	}
}

void course_descent_of_doubt() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: draw_text(61, 2, "                ", 1, RED, hud_colour); break;
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
			case 50: draw_text(61, 2, "DESCENT OF DOUBT", 1, RED, hud_colour); break;
			case 1: play_width_target = 50; break;
		}
	}
}

void course_vanity_fair() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: draw_text(63, 2, "           ", 1, RED, hud_colour); break;
		}
	} else if ((line > 300) && (line < 400)) {
        switch (line) {
		}
	} else if ((line > 200) && (line < 300)) {
        switch (line) {
		}	
	} else if ((line > 100) && (line < 200)) {
        switch (line) {
			case 150: if (play_course_next != 0) {play_course = play_course_next; update_map(75, 4, RED, BLACK); play_progress = 0; draw_text(63, 2, "           ", 1, RED, hud_colour);} break;
		}
		
	} else if ((line > 0) && (line < 100)) {
        switch (line) {
			
			case 99: course_special(26, 5, 7, 66); break; //Goes to 26, Descent of Doubt.
			case 75: draw_text(63, 2, "VANITY FAIR", 1, RED, hud_colour); break;
			case 1: play_width_target = 55;break;
		}
	}
}
