#ifndef _MERCY_H_
#define _MERCY_H_

struct mercy_context {

};

int mercy_init(struct mercy_context *);
int mercy_free(struct mercy_context *);

int mercy_clear(struct mercy_context *);
int mercy_flush(struct mercy_context *);

int mercy_write(struct mercy_context *, const char *);
int mercy_writen(struct mercy_context *, const char *, size_t);

#endif
