# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 07:47:15 by evila-ro          #+#    #+#              #
#    Updated: 2022/01/11 08:22:37 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= array

SRCS			= ./main.cpp

OBJS			= ${SRCS:.cpp=.o}

CXX				= clang++

CXXFLAGS		= -Wall -Werror -Wextra -std=c++98

RM				= rm -f

${NAME}:		${OBJS}
					@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

all:			${NAME}

clean:
					@${RM} ${OBJS}

fclean:			clean
					@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
