# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 16:41:44 by evila-ro          #+#    #+#              #
#    Updated: 2023/12/22 03:03:38 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= RPN

SRC			= ./main.cpp	./RPN.cpp

OBJ			= ${SRC:.cpp=.o}

CC			= clang++

FLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

${NAME}:	${OBJ}
			@${CC} ${FLGAS} -o ${NAME} ${OBJ}

all:		${NAME}

clean:
			@${RM} ${OBJ}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re