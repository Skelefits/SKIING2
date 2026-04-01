void course_path_of_renewal() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: draw_text(61, 2, "               ", 1, RED, hud_colour); break;
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
			case 50: draw_text(61, 2, "RIVERS OF DEATH", 1, RED, hud_colour); break;
			case 1: play_width_target = 50; update_map(75, 4, RED, map_colour); break;
		}
	}
}

void course_endless_forest() {
	int line = play_progress + SCREEN_HEIGHT - play_row;
	int ybase = 0;
    if ((line > 500) && (line < 600)) {
        switch (line) {
			case 501: next_course(); break;
		}
	} else if ((line > 400) && (line < 500)) {
        switch (line) {
			case 499: draw_text(61, 2, "              ", 1, RED, hud_colour); break;
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
			case 50: draw_text(61, 2, "ENDLESS FOREST", 1, RED, hud_colour); break;
			case 1: play_width_target = 50; update_map(75, 4, RED, map_colour); break;
		}
	}
}
