#include "mercy.h"

int mercy_write(struct mercy_context *ctx, const char *str) {
	return buffer_puts(&ctx->buf, str);
}
