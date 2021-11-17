# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 09:25:12 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/17 08:06:20 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= open

SRCS	= ./main.cpp	./ClapTrap.cpp	./ScavTrap.cpp

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
