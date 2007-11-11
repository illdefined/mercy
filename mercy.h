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

struct mercy_context {
	unsigned short rows;
	unsigned short cols;

	char raw[_MERCY_BUFSIZE];
	buffer buf;
};

struct mercy_attr {

};

int mercy_init(struct mercy_context *);
int mercy_free(struct mercy_context *);

int mercy_clear(struct mercy_context *);

int mercy_seek(struct mercy_context *, unsigned short, unsigned short);
int mercy_seek_col(struct mercy_context *, unsigned short);

int mercy_write(struct mercy_context *, const char *);
int mercy_writen(struct mercy_context *, const char *, size_t);
int mercy_flush(struct mercy_context *);

#endif
