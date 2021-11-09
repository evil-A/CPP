# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 04:36:29 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/10 00:19:20 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violence

SRCS	= ./main.cpp	./HumanA.cpp	./HumanB.cpp	./Weapon.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= clang++

RM		= rm -f

FLAGS	= -Wall -Werror -Wextra -std=c++98

${NAME}:	${OBJS}
				@${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

fclean:		clean
				@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
# El puntero es una copia, puede ser creada aparte del humano, mientras que la referencia es el original y no puede crearse y darle un valor. Hay que darle un valor al crearla. por lo tanto la instancia de arma dentro de la clase humano debe llenarse en ese momento, aunque luego se le cambie el contenido.
