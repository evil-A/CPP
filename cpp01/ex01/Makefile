# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 00:04:16 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/09 02:16:36 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

SRCS	= ./main.cpp	./Zombie.cpp	./ZombieHorde.cpp

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
