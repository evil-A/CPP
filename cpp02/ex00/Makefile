# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/11 21:07:44 by evila-ro          #+#    #+#              #
#    Updated: 2024/04/15 11:55:20 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

SRC		= ./main.cpp	./Fixed.cpp

OBJ		= ${SRC:.cpp=.o}

CC		= clang++

RM		= rm -rf

FLAGS	= -Wall -Werror -Wextra -std=c++98

${NAME}:	${OBJ}
	@${CC} ${FLAGS} -o ${NAME} ${OBJ}

all:		${NAME}

clean:
	@${RM} ${OBJ}

fclean:	clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
