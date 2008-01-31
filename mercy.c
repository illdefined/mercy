#include <unistd.h>

#include "mercy.h"

struct mercy_context mercy_context = {
	/* Safe defaults */
	.rows = 80,
	.cols = 25,
};
