include config.mk

CFLAGS += -std=c99 -D_POSIX_C_SOURCE=200112L
CFLAGS += -Wall -Wno-unused-parameter

SRC = mercy.c resize.c
SRC += aseek.c aseek_col.c rseek_row.c rseek_col.c
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
