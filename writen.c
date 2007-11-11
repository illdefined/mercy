#include "mercy.h"

int mercy_writen(struct mercy_context *ctx, const char *str, size_t len) {
	return buffer_put(&ctx->buf, str, len);
}
