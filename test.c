#include <unistd.h>

#include "mercy.h"

int main(int argc, char *argv[]) {
	mercy_init();
	mercy_clear();
	mercy_seek(16, 16);
	mercy_write("Hello world!\n");
	mercy_flush();
	mercy_seek_col(8);
	mercy_write("foo");
	mercy_move_forw(8);
	mercy_write("bar");
	mercy_line_up(4);
	mercy_write("spam");
	mercy_line_down(1);
	mercy_write("eggs\n");
	mercy_flush();
	sleep(10);
	mercy_free();

	return 0;
}
