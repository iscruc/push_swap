# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 16:58:51 by icruces-          #+#    #+#              #
#    Updated: 2024/03/17 23:35:09 by icruces-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= push_swap.a
TARGET 	= push_swap

#Directories
LIBS = libs
INC = inc/
SRC_DIR = src/
OBJ_DIR = obj/


#Compiler and Flags
CC 	= gcc 
CFLAGS 	= -Wall -Wextra -Werror
AR		= ar -crs
RM = rm -f
LDLIBS	:= -lft

#Source Files
SRC_FILES	=  main.c 

OBJ = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

#Define message style
define PRINT_MESSAGE
	@echo "\n*********************************************"
	@echo "* $1"
	@echo "*********************************************\n"
endef

#Build rules
all: $(TARGET)
	$(call PRINT_MESSAGE, "Successful!!!")

#compile object files from source files

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(call PRINT_MESSAGE,"Creating library files of $(LIBS)...")
	@make -C $(LIBS)
	$(call PRINT_MESSAGE,"Creating library $@...")
	$(AR) $(NAME) $^

clean: 
	$(call PRINT_MESSAGE, "Cleaning temporary files of $(TARGET)...")
	$(RM) -rf $(OBJ_DIR)
	$(RM) $(TARGET)
	$(RM) $(NAME)
	@make clean -C $(LIBS)

fclean:
	$(call PRINT_MESSAGE, "Removing all generated files...")
	$(RM) -rf $(OBJ_DIR)
	$(RM) $(TARGET)
	$(RM) $(NAME)
	@make fclean -C $(LIBS)

re: fclean all

$(TARGET): $(OBJ)
	$(call PRINT_MESSAGE, "Generating executable $(TARGET)...")
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

.PHONY: all clean fclean re