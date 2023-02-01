# ************************************************************************************************** #
#                                                                                                    #
#                                                         :::   ::::::::   ::::::::  :::::::::::     #
#    Makefile                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:      #
#                                                       +:+         +:+        +:+        +:+        #
#    By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+          #
#                                                     +#+         +#+        +#+      +#+            #
#    Created: 2023/01/17 02:49:02 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#              #
#    Updated: 2023/01/17 02:49:02 by ahjadani     ####### ########   ########      ###.ma            #
#                                                                                                    #
# ************************************************************************************************** #

NAME = bsp
SRC = main.cpp Fixed.cpp bsp.cpp Point.cpp
OBJS = $(SRC:.cpp=.o)
INC = Fixed.h Point.h
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