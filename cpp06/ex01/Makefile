# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evila-ro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 20:26:37 by evila-ro          #+#    #+#              #
#    Updated: 2021/12/28 20:31:49 by evila-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= cereal

SRCS		= ./main.cpp

OBJS		= ${SRCS:.cpp=.o}

CXX			= clang++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

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
