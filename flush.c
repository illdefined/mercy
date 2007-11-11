#include "mercy.h"

int flush(struct mercy_context *ctx) {
	return buffer_flush(&ctx->buf);
}
