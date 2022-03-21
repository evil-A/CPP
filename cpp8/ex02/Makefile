# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/18 20:08:41 by evila-ro          #+#    #+#              #
#    Updated: 2022/03/20 19:56:17 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= mutant

SRCS		= ./main.cpp ./mutantstack.cpp

OBJS		= ${SRCS:.cpp=.o}

CXX			= clang++

CXXFLAGS	=  -Wall -Werror -Wextra -std=c++98

RM			= rm -f

${NAME}:	${OBJS}
				@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
				@${RM} ${OBJS}

fclean:		clean
				@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
