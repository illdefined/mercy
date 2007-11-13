#ifndef _MERCY_H_
#define _MERCY_H_

#include <sys/types.h>
#include <buffer.h>

#ifndef _MERCY_ESCAPE
#define _MERCY_ESCAPE "\x1B["
/* #define _MERCY_ESCAPE "\x9B" */
#endif

#ifndef _MERCY_BUFSIZE
#define _MERCY_BUFSIZE 512
#endif

extern struct _mercy_context {
	unsigned short rows;
	unsigned short cols;

	char raw[_MERCY_BUFSIZE];
	buffer buf;
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

int mercy_write(const char *);
int mercy_writen(const char *, size_t);
int mercy_write_long(long integer);
int mercy_flush();

#endif
