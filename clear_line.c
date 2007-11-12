#include "mercy.h"

int mercy_clear_line() {
	return buffer_puts(&mercy_context.buf, _MERCY_ESCAPE "2K");
}
