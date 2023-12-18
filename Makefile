# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oridamasceno <marvin@42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 19:30:00 by oridamasceno      #+#    #+#              #
#    Updated: 2023/12/18 19:30:15 by oridamasceno     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_libftprintf.a

SOURCES = ./sources/ft_printf.c \
	  	./sources/ft_numbers.c \
		./sources/ft_words.c \


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
