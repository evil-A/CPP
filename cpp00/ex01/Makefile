# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 18:45:11 by evila-ro          #+#    #+#              #
#    Updated: 2021/10/29 19:26:13 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= chorbo

SRCS	= ./main.cpp ./chorbo.class.cpp

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
