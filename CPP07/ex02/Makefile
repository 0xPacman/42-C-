# ************************************************************************************************** #
#                                                                                                    #
#                                                         :::   ::::::::   ::::::::  :::::::::::     #
#    Makefile                                          :+:+:  :+:    :+: :+:    :+: :+:     :+:      #
#                                                       +:+         +:+        +:+        +:+        #
#    By: ahjadani <ahjadani@student.1337.ma>           +#+      +#++:      +#++:        +#+          #
#                                                     +#+         +#+        +#+      +#+            #
#    Created: 2023/01/30 17:50:47 by ahjadani        #+#  #+#    #+# #+#    #+#     #+#              #
#    Updated: 2023/01/30 17:50:47 by ahjadani     ####### ########   ########      ###.ma            #
#                                                                                                    #
# ************************************************************************************************** #

NAME = array
SRC = main.cpp 
OBJS = $(SRC:.cpp=.o)
INC = array.h array.tpp
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