# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/28 11:26:59 by evila-ro          #+#    #+#              #
#    Updated: 2021/10/29 17:23:17 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRCS	= ./megaphone.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= g++

FLAGS	= -Wall -Werror -Wextra

${NAME}:	${OBJS}
			@${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
