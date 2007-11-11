#include "mercy.h"

int mercy_writen(const char *str, size_t len) {
	return buffer_put(&mercy_context.buf, str, len);
}
