#include <stdlib.h>

#include "mercy.h"

int mercy_rseek_col(signed short cells) {
	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, abs(cells)) ||
		buffer_put(&mercy_context.buf, cells < 0 ? "C" : "D", 1))
		return -1;

	return 0;
}
