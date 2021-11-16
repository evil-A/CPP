# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 03:36:27 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/16 08:59:07 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed

SRCS	= ./main.cpp	./Fixed.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= clang++

FLAGS	= -Wall -Werror -Wextra -std=c++98

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
