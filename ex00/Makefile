# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msimek <msimek@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/26 14:02:10 by msimek            #+#    #+#              #
#    Updated: 2026/03/26 14:04:00 by msimek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




NAME = zombie

CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

 .PHONY: all clean fclean re