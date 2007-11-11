include config.mk

CFLAGS += -std=c99 -D_POSIX_C_SOURCE=200112L
CFLAGS += -Wall -Wno-unused-parameter

SRC = clear.c flush.c free.c init.c resize.c seek.c seek_col.c write.c writen.c
OBJ = ${SRC:.c=.o}

all: libmercy.a

.c.o:
	@echo "  CC $<"
	@${CC} ${CPPFLAGS} ${CFLAGS} -c $<

libmercy.a: ${OBJ}
	@echo "  AR $@"
	@${AR} rc $@ ${OBJ}

clean:
	${RM} ${OBJ} libmercy.a


.PHONY: all clean
