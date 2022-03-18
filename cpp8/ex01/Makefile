# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/17 20:37:26 by evila-ro          #+#    #+#              #
#    Updated: 2022/03/17 21:39:24 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= span

SRCS		= ./main.cpp ./span.cpp

OBJS		= ${SRCS:.cpp=.o}

CXX			= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

${NAME}:	${OBJS}
				@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

fclean:		clean
				@${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
