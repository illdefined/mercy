#include "mercy.h"

int mercy_input_mode(int mode) {
	struct termios attr;

	if (tcgetattr(0, &attr))
		return -1;

	attr.c_lflag &= ~(ICANON | ISIG | ECHO | ECHOE | ECHOK | ECHONL);
	attr.c_lflag |= mode;

	if (tcsetattr(0, TCSANOW, &attr))
		return -1;

	return 0;
}
