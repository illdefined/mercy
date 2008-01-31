#include "mercy.h"

int mercy_font(unsigned char font) {
	if (buffer_puts(buffer_1, MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, font) ||
		buffer_put(buffer_1, "m", 1))
		return -1;

	return 0;
}
