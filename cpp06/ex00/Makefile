# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 08:20:31 by evila-ro          #+#    #+#              #
#    Updated: 2021/12/26 17:48:09 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= scalar

SRCS	= ./main.cpp	./Scalar.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= clang++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 #-Wunused-private-field #-g3 -fsanitize=address

RM		= rm -f

${NAME}:	${OBJS}
				@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

fclean:		clean
				@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
