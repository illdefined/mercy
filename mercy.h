#ifndef _MERCY_H_
#define _MERCY_H_

#include <sys/types.h>
#include <stdarg.h>
#include <buffer.h>

#ifndef _MERCY_ESCAPE
#define _MERCY_ESCAPE "\x1B["
/* #define _MERCY_ESCAPE "\x9B" */
#endif

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

extern struct _mercy_context {
	unsigned short rows;
	unsigned short cols;
} mercy_context;

struct mercy_attr {

};

int mercy_resize();

int mercy_clear();
int mercy_clear_line();

int mercy_aseek(unsigned short, unsigned short);
int mercy_aseek_col(unsigned short);
int mercy_rseek_row(signed short);
int mercy_rseek_col(signed short);

#endif
