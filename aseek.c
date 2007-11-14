#include "mercy.h"

int mercy_aseek(unsigned short row, unsigned short col) {
	if (row >= mercy_context.rows ||
		col >= mercy_context.cols)
		return -1;

	if (buffer_puts(buffer_1, _MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, row + 1) ||
		buffer_put(buffer_1, ";", 1) ||
		buffer_putulong(buffer_1, col + 1) ||
		buffer_put(buffer_1, "H", 1))
		return -1;

	return 0;
}
