#include <unistd.h>

#include "mercy.h"

struct _mercy_context mercy_context;

int mercy_init() {
	buffer_init(&mercy_context.buf, write, 1, mercy_context.raw, sizeof mercy_context.raw);
	return mercy_resize();
}
