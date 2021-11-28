# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 14:58:39 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/28 20:07:16 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= materia

SRCS	= ./main.cpp	./AMateria.cpp	./Character.cpp	./Ice.cpp	./Cure.cpp	./MateriaSource.cpp

OBJS	=${SRCS:.cpp=.o}

CC		= clang++

FLAGS	= -Werror -Wextra -Wall -Wshadow -Wno_shadow -std=c++98

RM		= rm -f

${NAME}:	${OBJS}
				@${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

fclean:		clean
				@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
