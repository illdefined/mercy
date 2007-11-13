include config.mk

CFLAGS += -std=c99 -D_POSIX_C_SOURCE=200112L
CFLAGS += -Wall -Wno-unused-parameter

SRC = mercy.c resize.c
SRC += seek.c seek_col.c
SRC += move_up.c move_down.c move_forw.c move_back.c
SRC += lines_up.c lines_down.c
SRC += clear.c clear_line.c
SRC += flush.c write.c writen.c write_long.c
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
