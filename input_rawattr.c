#include "mercy.h"

int mercy_input_raw(unsigned short min, unsigned short timeout) {
	struct termios attr;

	if (tcgetattr(0, &attr))
		return -1;

	if (attr.c_lflag & ICANON)
		return -1;

	attr.c_cc[VMIN] = min;
	attr.c_cc[VTIME] = timeout / 100;

	if (tcsetattr(0, TCSANOW, &attr))
		return -1;

	return 0;
}
