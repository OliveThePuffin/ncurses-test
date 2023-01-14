#include "screen.h"

int test_ncurses()
{
	initscr();
	printw("Hello World!\n");
	printw("Press any key to escape...");
	refresh();
	getch();
	endwin();

	return 0;
}
