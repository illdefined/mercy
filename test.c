#include <unistd.h>

#include "mercy.h"

int main(int argc, char *argv[]) {
	mercy_resize();
	mercy_clear();
	mercy_font(MERCY_BOLD);
	mercy_colour_fg(MERCY_YELLOW);
	mercy_colour_bg(MERCY_BLUE);
	mercy_cursor_hide();
	mercy_aseek(16, 16);
	mercy_puts("Hello world!\n");
	mercy_flush();
	sleep(1);
	mercy_cursor_show();
	mercy_aseek_col(8);
	mercy_puts("foo");
	mercy_rseek_col(8);
	mercy_puts("bar");
	mercy_rseek_row(-4);
	mercy_puts("spam");
	mercy_rseek_row(1);
	mercy_puts("eggs");
	mercy_flush();
	sleep(1);
	mercy_clear_line();
	mercy_putlong(-64l);
	mercy_flush();
	sleep(2);
	mercy_clear();
	mercy_flush();

	return 0;
}
