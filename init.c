#include <unistd.h>

#include "mercy.h"

int mercy_init(struct mercy_context *ctx) {
	buffer_init(&ctx->buf, write, 1, ctx->raw, sizeof ctx->raw);

	return 0;
}
