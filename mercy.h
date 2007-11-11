#ifndef _MERCY_H_
#define _MERCY_H_

#include <sys/types.h>
#include <buffer.h>

#ifndef BUFSIZE
#define BUFSIZE 512
#endif

struct mercy_context {
	char raw[BUFSIZE];
	buffer buf;
};

struct mercy_attr {

};

int mercy_init(struct mercy_context *);
int mercy_free(struct mercy_context *);

int mercy_clear(struct mercy_context *);

int mercy_write(struct mercy_context *, const char *);
int mercy_writen(struct mercy_context *, const char *, size_t);
int mercy_flush(struct mercy_context *);

#endif
