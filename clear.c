#include "mercy.h"

int mercy_clear() {
	return buffer_puts(buffer_1, _MERCY_ESCAPE "2J");
}
