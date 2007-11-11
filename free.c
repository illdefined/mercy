#include "mercy.h"

int mercy_free(struct mercy_context *ctx) {
	return mercy_flush(ctx);
}
