include config.mk

SRC = mercy.c resize.c
SRC += seek_abs.c seek_rel.c
SRC += clear.c clear_line.c
SRC += cursor_show.c cursor_hide.c
SRC += font.c colour_fg.c colour_bg.c
SRC += input_mode.c input_rawattr.c
OBJ = ${SRC:.c=.o}

all: libmercy.a

.c.o:
	@echo "  CC $<"
	@${CC} ${CFLAGS} -c $<

libmercy.a: ${OBJ}
	@echo "  AR $@"
	@${AR} rc $@ $^

clean:
	${RM} ${OBJ} libmercy.a


.PHONY: all clean
