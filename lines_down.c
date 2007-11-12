#include "mercy.h"

int mercy_line_down(unsigned short lines) {
	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, lines) ||
		buffer_put(&mercy_context.buf, "E", 1))
		return -1;

	return 0;
}
