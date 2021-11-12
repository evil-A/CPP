# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/11 06:40:39 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/12 03:28:06 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= karenFilter

SRCS	= ./main.cpp	./Karen.cpp

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
