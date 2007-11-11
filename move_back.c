#include "mercy.h"

int mercy_move_back(unsigned short cells) {
	if (buffer_puts(&mercy_context.buf, _MERCY_ESCAPE) ||
		buffer_putulong(&mercy_context.buf, cells) ||
		buffer_put(&mercy_context.buf, "D", 1))
		return -1;

	return 0;
}
