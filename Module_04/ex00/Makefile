# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 13:58:55 by avaganay          #+#    #+#              #
#    Updated: 2023/08/28 09:13:21 by avaganay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:		fclean, all, clear, re

NAME					=	Polymorphisme

CMP						=	c++
FLAG						=	-Wall -Wextra -Werror -std=c++98
RM						=	rm -rf
BUILD_DIR				= 	build/

INCLUDE_DIR					=	include
INCLUDE_FILE				= 	Animal Dog Cat WrongAnimal WrongCat
INC						= 	$(addsuffix .hpp, $(addprefix $(INCLUDE_DIR)/, $(INCLUDE_FILE)))

SRC_DIR				=	src
SRC_FILE				=	main Animal Dog Cat WrongAnimal WrongCat
SRC					=  	$(addsuffix .cpp, $(addprefix $(SRC_DIR)/, $(SRC_FILE)))

OBJS			    	= 	$(SRC:%.cpp=$(BUILD_DIR)%.o)

$(BUILD_DIR)%.o:		%.cpp $(INC)
						@mkdir -p $(@D)
						@$(CMP) $(FLAG) -I$(INCLUDE_DIR) -c $< -o $@

all:		clear $(NAME)

clear:
			clear

$(NAME):	$(INC) $(OBJS)
			@$(CMP) $(FLAG) $(OBJS) -I$(INCLUDE_DIR) -o $(NAME)
			@echo "\033[32m-- $(NAME) compile and create --\033[0m"

fclean:
			$(RM) $(NAME)
			$(RM) $(BUILD_DIR)

re:			fclean all