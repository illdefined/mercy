#include <stdlib.h>

#include "mercy.h"

int mercy_rseek_row(signed short cells) {
	if (buffer_puts(buffer_1, _MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, abs(cells)) ||
		buffer_put(buffer_1, cells < 0 ? "A" : "B", 1))
		return -1;

	return 0;
}
