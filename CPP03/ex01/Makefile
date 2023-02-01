# ************************************************************************************************** #
#                                                                                                    #
#                                                         :::   ::::::::   ::::::::  :::::::::::     #
#    Makefile                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:      #
#                                                       +:+         +:+        +:+        +:+        #
#    By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+          #
#                                                     +#+         +#+        +#+      +#+            #
#    Created: 2023/01/19 14:59:26 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#              #
#    Updated: 2023/01/19 14:59:26 by ahjadani     ####### ########   ########      ###.ma            #
#                                                                                                    #
# ************************************************************************************************** #

NAME = scavtrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRC:.cpp=.o)
INC = ClapTrap.h ScavTrap.h
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

all: $(NAME)

$(NAME): $(INC) $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re