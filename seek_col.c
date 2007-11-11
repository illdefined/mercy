#include "mercy.h"

int mercy_seek_col(unsigned short col) {
	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, col + 1) ||
		buffer_put(&mercy_context.buf, "G", 1))
		return -1;

	return 0;
}
