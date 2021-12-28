# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 21:08:50 by evila-ro          #+#    #+#              #
#    Updated: 2021/12/28 21:16:06 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= identify

SRCS		= ./main.cpp	./Base.cpp	#./A.cpp	./B.cpp	./C.cpp

OBJS		= ${SRCS:.cpp=.o}

CXX			= clang++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

RM			= rm -f

${NAME}		= ${OBJS}
				@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

flcean:		clean
				@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
