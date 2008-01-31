#include "mercy.h"

int mercy_clear() {
	return buffer_puts(buffer_1, MERCY_ESCAPE "2J");
}
