# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahjadani <ahjadani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 18:39:02 by ahjadani          #+#    #+#              #
#    Updated: 2023/03/17 18:39:56 by ahjadani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
SRC = main.cpp BitcoinExchange.cpp
OBJS = $(SRC:.cpp=.o)
INC = BitcoinExchange.h
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