NAME=term-color
CFLAGS=-Wall -Wextra -Werror
INCLUDE=include
SRCS=main.c \
	 src/colors.c \
	 src/helper.c

build:
	gcc ${SRCS} -I ${INCLUDE} ${CFLAGS} -o bin/${NAME}

fclean:
	rm -f bin/${NAME}

clean:
	rm -f *.o *.out
