#include "mercy.h"

int mercy_colour_bg(unsigned char colour) {
	if (buffer_puts(buffer_1, _MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, colour + 40) ||
		buffer_put(buffer_1, "m", 1))
		return -1;

	return 0;
}
