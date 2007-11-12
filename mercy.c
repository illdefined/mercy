#include <unistd.h>

#include "mercy.h"

struct _mercy_context mercy_context = {
	/* Safe defaults */
	.rows = 80,
	.cols = 25,

	.buf = BUFFER_INIT(write, 1, mercy_context.raw, sizeof mercy_context.raw)
};
