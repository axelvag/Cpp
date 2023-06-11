# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avaganay <avaganay@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/11 11:02:05 by avaganay          #+#    #+#              #
#    Updated: 2023/06/11 11:03:03 by avaganay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@printf "$(GREEN)    Megaphone ready\n$(RESET)"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    Megaphone removed$(RESET)\n"

fclean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    Megaphone removed$(RESET)\n"

re: clean all