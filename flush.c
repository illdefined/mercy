#include "mercy.h"

int mercy_flush() {
	return buffer_flush(&mercy_context.buf);
}
