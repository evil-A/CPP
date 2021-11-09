# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/09 04:36:29 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/09 05:03:54 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= violence

SRCS	= ./main.cpp	./HumanA.cpp	./Weapon.cpp

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
				@${RM} ${NME}

re: fclean all

.PHONY: all clean fclean re
