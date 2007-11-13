#include <fmt.h>

#include "mercy.h"

int mercy_write_long(long integer) {
	char buf[FMT_LONG];

	return mercy_writen(buf, fmt_long(buf, integer));
}
