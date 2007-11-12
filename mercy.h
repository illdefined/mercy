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

int mercy_init();
int mercy_free();

int mercy_resize();

int mercy_clear();

int mercy_seek(unsigned short, unsigned short);
int mercy_seek_col(unsigned short);
int mercy_move_up(unsigned short);
int mercy_move_down(unsigned short);
int mercy_move_forw(unsigned short);
int mercy_move_back(unsigned short);
int mercy_lines_up(unsigned short);
int mercy_lines_down(unsigned short);

int mercy_write(const char *);
int mercy_writen(const char *, size_t);
int mercy_flush();

#endif
