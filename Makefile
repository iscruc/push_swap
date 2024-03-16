# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 16:58:51 by icruces-          #+#    #+#              #
#    Updated: 2024/03/16 17:31:39 by icruces-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= push_swap

#Directories
LIBFT = ./libft/
INC = inc/
SRC_DIR = srcs/
OBJ_DIR = obj/


#Compiler and Flags
CC 	= gcc 
CFLAGS 	= -Wall -Wextra -Werror
RM = rm -rf

#Source Files


#Build rules
start: @make all


all: $(NAME)


#compile object files from source files

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all


.

