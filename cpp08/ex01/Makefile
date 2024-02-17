# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smuhamma <smuhamma@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 15:23:33 by smuhamma          #+#    #+#              #
#    Updated: 2024/02/09 16:10:47 by smuhamma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp Span.cpp

OBJ =	$(SRC:.cpp=.o)

CXX =	c++

RM =	rm -f

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

NAME =	ex01

%.o : %.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re