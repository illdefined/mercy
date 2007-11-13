#include <unistd.h>

#include "mercy.h"

int main(int argc, char *argv[]) {
	mercy_resize();
	mercy_clear();
	mercy_aseek(16, 16);
	mercy_write("Hello world!\n");
	mercy_flush();
	sleep(1);
	mercy_aseek_col(8);
	mercy_write("foo");
	mercy_rseek_col(8);
	mercy_write("bar");
	mercy_rseek_row(-4);
	mercy_write("spam");
	mercy_rseek_row(1);
	mercy_write("eggs");
	mercy_flush();
	sleep(1);
	mercy_clear_line();
	mercy_write_long(-64l);
	mercy_flush();
	sleep(2);
	mercy_clear();
	mercy_flush();

	return 0;
}
