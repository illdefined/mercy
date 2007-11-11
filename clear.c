#include "mercy.h"

int mercy_clear(struct mercy_context *ctx) {
	return buffer_puts(&ctx->buf, _MERCY_ESCAPE "2J");
}
