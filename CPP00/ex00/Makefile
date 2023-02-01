# ************************************************************************************************** #
#                                                                                                    #
#                                                         :::   ::::::::   ::::::::  :::::::::::     #
#    Makefile                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:      #
#                                                       +:+         +:+        +:+        +:+        #
#    By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+          #
#                                                     +#+         +#+        +#+      +#+            #
#    Created: Invalid date        by                 #+#  #+#    #+# #+#    #+#     #+#              #
#    Updated: 2023/01/08 21:27:04 by ahjadani     ####### ########   ########      ###.ma            #
#                                                                                                    #
# ************************************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
