#include <stdlib.h>

#include "mercy.h"

int mercy_seek_rel(signed short rows, signed short cols) {
	if (buffer_puts(buffer_1, MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, abs(rows)) ||
		buffer_put(buffer_1, rows < 0 ? "A" : "B", 1) ||

		buffer_puts(buffer_1, MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, abs(cols)) ||
		buffer_put(buffer_1, cols < 0 ? "C" : "D", 1))
		return -1;

	return 0;
}
