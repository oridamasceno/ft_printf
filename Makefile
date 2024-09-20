NAME = libftprintf.a

SOURCES = ft_printf.c \
	  ft_numerical.c \
	  ft_letters.c \


OBJECTS = ${SOURCES:.c=.o}

RM = @rm -f

CC = cc

CFLAGS = -Wall -Wextra -Werror
MSG1 = @echo "-------------\n42@compiled ✔︎\nMachine is working!\n-------------------"
MSG2 = @echo "------------\n42@cleaned ✔︎\nWe cleaned the floor and now there's no .o files!\n------------------------------------------------"




all: ${NAME}

$(NAME): ${OBJECTS}
	ar -rvs ${NAME} ${OBJECTS}
	${MSG1}

clean:
	${RM} ${OBJECTS}
	${MSG2}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
