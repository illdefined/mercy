#include "mercy.h"

int mercy_flush(struct mercy_context *ctx) {
	return buffer_flush(&ctx->buf);
}
