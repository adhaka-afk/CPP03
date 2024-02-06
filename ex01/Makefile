# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adhaka <adhaka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 15:06:35 by adhaka            #+#    #+#              #
#    Updated: 2024/01/28 22:46:43 by adhaka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= ScavTrap

CC				= c++

RM				= rm -f

CFLAGS			= -Wall -Wextra -Werror -std=c++98

HEADERS			=	ClapTrap.hpp \
					ScavTrap.hpp

SRCS			=	ClapTrap.cpp \
					ScavTrap.cpp \
					main.cpp

OBJS			= $(SRCS:.cpp=.o)

%.o: %.cpp $(HEADERS)
		${CC} ${CFLAGS} -c $< -o $@

all:			$(NAME)

$(NAME):		$(OBJS) $(HEADERS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
