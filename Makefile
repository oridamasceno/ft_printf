NAME = ft_printf.a

SOURCES = ft_putchar.c ft_putnbr.c ft_putstr.c



OBJECTS = ${SOURCES: .c=.0}

RM = @rm -f

CC = cc

CFLAGS = -Wall Wextra -Werror
MSG1 = @echo "-------------\n42@compiled ✔︎\nMachine is working!\n-------------------"
MSG2 = @echo "------------\n42@cleaned ✔︎\nWe cleaned the floor and now there's no .o files!\n------------------------------------------------"

ARCHIVE = @ar -rcs



all: ${NAME}

$(NAME): ${OBJECTS}
	${ARCHIVE} ${NAME} ${OBJECTS}

clean:
	${RM} ${OBJCETS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

