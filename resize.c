#include <sys/ioctl.h>
#include <termios.h>

#include "mercy.h"

int mercy_resize() {
	struct winsize ws;

	if (ioctl(1, TIOCGWINSZ, &ws))
		return -1;

	mercy_context.rows = ws.ws_row;
	mercy_context.cols = ws.ws_col;

	return 0;
}
