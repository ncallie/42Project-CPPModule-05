# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncallie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 15:18:31 by ncallie           #+#    #+#              #
#    Updated: 2022/03/29 16:20:40 by ncallie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all fclean clean re

NAME     =	ex02
SRC      =	./src/Bureaucrat.cpp ./src/main.cpp ./src/Form.cpp ./src/PresidentialPardonForm.cpp ./src/RobotomyRequestForm.cpp ./src/ShrubberyCreationForm.cpp
OBJ      =	$(SRC:.cpp=.o)
HDR      =	./inc/Bureaucrat.h ./inc/Form.h ./inc/PresidentialPardonForm.h ./inc/RobotomyRequestForm.h ./inc/ShrubberyCreationForm.h
CC       =	c++
FLAGS =	-Wall -Wextra -Werror -std=c++98

.PHONY:		all clean fclean re 
all:		$(NAME)

$(NAME):	$(OBJ) 
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp	$(HDR)
			$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all