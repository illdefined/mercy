#include "mercy.h"

int main(int argc, char *argv[]) {
	mercy_init();
	mercy_clear();
	mercy_seek(16, 16);
	mercy_write("Hello world!\n");
	mercy_flush();
	mercy_seek_col(8);
	mercy_write("foo\n");
	mercy_free();

	return 0;
}
