# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 07:50:26 by evila-ro          #+#    #+#              #
#    Updated: 2021/11/19 12:12:54 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= dinner

SRCS	= ./main.cpp	./Animal.cpp ./Dog.cpp	./Cat.cpp	./WrongAnimal.cpp	./WrongCat.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= clang++

RM		= rm -f

FLAGS	= -Wall -Werror -Wextra -Wshadow -Wno_shadow -std=c++98

${NAME}:	${OBJS}
				@${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

fclean:		clean
				@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
