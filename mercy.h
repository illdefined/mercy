#ifndef _MERCY_H_
#define _MERCY_H_

#include <stdarg.h>

#include <sys/types.h>
#include <termios.h>

#include <buffer.h>

#ifndef _MERCY_ESCAPE
#define _MERCY_ESCAPE "\x1B["
/* #define _MERCY_ESCAPE "\x9B" */
#endif

#define MERCY_BLACK		0
#define MERCY_RED		1
#define MERCY_GREEN		2
#define MERCY_YELLOW	3
#define MERCY_BLUE		4
#define MERCY_CYAN		5
#define MERCY_MAGENTA	6
#define MERCY_WHITE		7
#define MERCY_RESET		9

#define MERCY_NORMAL	0
#define MERCY_BOLD		1

/* Zero-cost convenience macros */
#define mercy_flush()				buffer_flush(buffer_1)
#define mercy_put(str, len)			buffer_put(buffer_1, str, len)
#define mercy_put8long(num)			buffer_put8long(buffer_1, num)
#define mercy_putalign(str, len)	buffer_putalign(buffer_1, str, len)
#define mercy_puterror()			buffer_puterror(buffer_1)
#define mercy_puterror2(num)		buffer_puterror2(buffer_1, num)
#define mercy_putlong(num)			buffer_putlong(buffer_1, num)
#define mercy_putlonglong(num)		buffer_putlonglong(buffer_1, num)
#define mercy_putm(...)				buffer_putm(buffer_1, VA_ARGS)
#define mercy_putnlflush()			buffer_putnlflush(buffer_1)
#define mercy_puts(str)				buffer_puts(buffer_1, str)
#define mercy_putsalign(str)		buffer_putsalign(buffer_1, str)
#define mercy_putsflush(str)		buffer_putsflush(buffer_1, str)
#define mercy_putspace()			buffer_putspace(buffer_1)
#define mercy_putulong(num)			buffer_putulong(buffer_1, num)
#define mercy_putulonglong(num)		buffer_putulonglong(buffer_1, num)
#define mercy_putxlong(num)			buffer_putxlong(buffer_1, num)

#define mercy_drain()				tcdrain(1);

extern struct _mercy_context {
	unsigned short rows;
	unsigned short cols;
} mercy_context;

int mercy_resize();

int mercy_clear();
int mercy_clear_line();

int mercy_seek_abs(unsigned short, unsigned short);
int mercy_seek_col_abs(unsigned short);
int mercy_seek_row_rel(signed short);
int mercy_seek_col_rel(signed short);

int mercy_cursor_show();
int mercy_cursor_hide();

int mercy_font(unsigned char);
int mercy_colour_fg(unsigned char);
int mercy_colour_bg(unsigned char);

#endif
