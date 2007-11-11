#include "mercy.h"

int mercy_seek_col(struct mercy_context *ctx, unsigned short col) {
	if (buffer_puts(&ctx->buf, _MERCY_ESCAPE) ||
		buffer_putulong(&ctx->buf, col + 1) ||
		buffer_put(&ctx->buf, "G", 1))
		return -1;

	return 0;
}
