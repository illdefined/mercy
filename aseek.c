#include "mercy.h"

int mercy_aseek(unsigned short row, unsigned short col) {
	if (row >= mercy_context.rows ||
		col >= mercy_context.cols)
		return -1;

	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, row + 1) ||
		buffer_put(&mercy_context.buf, ";", 1) ||
		buffer_putulong(&mercy_context.buf, col + 1) ||
		buffer_put(&mercy_context.buf, "H", 1))
		return -1;

	return 0;
}
