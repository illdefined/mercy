include config.mk

SRC = mercy.c resize.c
SRC += aseek.c aseek_col.c rseek_row.c rseek_col.c
SRC += clear.c clear_line.c
SRC += cursor_show.c cursor_hide.c
SRC += font.c colour_fg.c colour_bg.c
OBJ = ${SRC:.c=.o}

all: libmercy.a

.c.o:
	@echo "  CC $<"
	@${CC} ${CFLAGS} -c $<

libmercy.a: ${OBJ}
	@echo "  AR $@"
	@${AR} rc $@ ${OBJ}

clean:
	${RM} ${OBJ} libmercy.a


.PHONY: all clean
