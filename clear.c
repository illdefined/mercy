#include "mercy.h"

int mercy_clear() {
	return buffer_puts(&mercy_context.buf, _MERCY_ESCAPE "2J");
}
