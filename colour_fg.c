#include "mercy.h"

int mercy_colour_fg(unsigned char colour) {
	if (buffer_puts(buffer_1, MERCY_ESCAPE) ||
		buffer_putulong(buffer_1, colour + 30) ||
		buffer_put(buffer_1, "m", 1))
		return -1;

	return 0;
}
