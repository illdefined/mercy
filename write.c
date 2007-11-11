#include "mercy.h"

int mercy_write(const char *str) {
	return buffer_puts(&mercy_context.buf, str);
}
