#include "mercy.h"

int mercy_clear_line() {
	return buffer_puts(buffer_1, _MERCY_ESCAPE "2K");
}
