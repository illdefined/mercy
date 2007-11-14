#include "mercy.h"

int mercy_aseek_col(unsigned short col) {
	if (col >= mercy_context.cols)
		return -1;

	if (buffer_puts(buffer_1, _MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, col + 1) ||
		buffer_put(buffer_1, "G", 1))
		return -1;

	return 0;
}
