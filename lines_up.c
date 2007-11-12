#include "mercy.h"

int mercy_line_up(unsigned short lines) {
	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, lines) ||
		buffer_put(&mercy_context.buf, "F", 1))
		return -1;

	return 0;
}
