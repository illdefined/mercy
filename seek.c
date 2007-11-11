#include "mercy.h"

int mercy_seek(struct mercy_context *ctx, unsigned short row, unsigned short col) {
	if (buffer_puts(&ctx->buf, _MERCY_ESCAPE) ||
		buffer_putulong(&ctx->buf, row + 1) ||
		buffer_put(&ctx->buf, ";", 1) ||
		buffer_putulong(&ctx->buf, col + 1) ||
		buffer_put(&ctx->buf, "H", 1))
		return -1;

	return 0;
}
