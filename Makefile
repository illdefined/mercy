CFLAGS ?= -Os -fomit-frame-pointer
CFLAGS += -std=c99 -D_POSIX_C_SOURCE=200112L
CFLAGS += -Wall -Wno-unused-parameter
LDFLAGS += -shared -lowfat

SRC = mercy.c

all: libmercy.a

libmercy.a: ${SRC}
	${CC} ${CFLAGS} ${LDFLAGS} -c ${SRC}

clean:
	${RM} *.o libmercy.so


.PHONY: all clean
