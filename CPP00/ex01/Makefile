# ************************************************************************************************** #
#                                                                                                    #
#                                                         :::   ::::::::   ::::::::  :::::::::::     #
#    Makefile                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:      #
#                                                       +:+         +:+        +:+        +:+        #
#    By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+          #
#                                                     +#+         +#+        +#+      +#+            #
#    Created: Invalid date        by                 #+#  #+#    #+# #+#    #+#     #+#              #
#    Updated: 2023/01/08 21:23:08 by ahjadani     ####### ########   ########      ###.ma            #
#                                                                                                    #
# ************************************************************************************************** #

NAME = phonebook
SRC = main.cpp phonebook.cpp
OBJS = $(SRC:.cpp=.o)
INC = phonebook.h
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
