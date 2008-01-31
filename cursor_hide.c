#include "mercy.h"

int mercy_cursor_hide() {
	if (buffer_puts(buffer_1, MERCY_ESCAPE "?25l"))
		return -1;

	return 0;
}
