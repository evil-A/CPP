# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 14:59:42 by evila-ro          #+#    #+#              #
#    Updated: 2022/03/16 17:16:43 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= easyfind

SRCS		= ./main.cpp

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
