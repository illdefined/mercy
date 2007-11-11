#include "mercy.h"

int main(int argc, char *argv[]) {
	struct mercy_context ctx;

	mercy_init(&ctx);
	mercy_clear(&ctx);
	mercy_seek(&ctx, 16, 16);
	mercy_write(&ctx, "Hello world!\n");
	mercy_flush(&ctx);
	mercy_seek_col(&ctx, 8);
	mercy_write(&ctx, "foo\n");
	mercy_free(&ctx);

	return 0;
}
