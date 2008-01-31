#include "mercy.h"

int mercy_cursor_show() {
	if (buffer_puts(buffer_1, MERCY_ESCAPE "?25h"))
		return -1;

	return 0;
}
