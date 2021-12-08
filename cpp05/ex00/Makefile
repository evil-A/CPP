# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 19:00:39 by evila-ro          #+#    #+#              #
#    Updated: 2021/12/06 03:13:57 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureau

SRCS	= ./main.cpp	./Bureaucrat.cpp

OBJS	= ${SRCS:.cpp=.o}

CC		= clang++

FLAGS	= -Wall -Wextra -Werror -Wshadow -Wno_shadow -std=c++98

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
