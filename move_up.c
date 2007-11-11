#include "mercy.h"

int mercy_move_up(unsigned short cells) {
	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, cells) ||
		buffer_put(&mercy_context.buf, "A", 1))
		return -1;

	return 0;
}
