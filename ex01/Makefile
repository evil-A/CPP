# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/14 02:44:26 by evila-ro          #+#    #+#              #
#    Updated: 2024/04/14 03:12:36 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

SRC		= ./main.cpp ./Fixed.cpp

OBJ		= ${SRC:.cpp=.o}

CC		= clang++

FLAGS	=  -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

${NAME}:	${OBJ}
	@${CC} ${FLAG} -o ${NAME} ${OBJ}

all:		${NAME}

clean:
	@${RM} ${OBJ}

fclean: 	clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
