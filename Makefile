# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 16:17:55 by tmalkawi          #+#    #+#              #
#    Updated: 2025/03/17 13:37:27 by tmalkawi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(BUILD_PATH)/bin/cub3D
MAIN_FILE = main.c

BUILD_PATH = build
LIB_PATH = lib
SRC_PATH = src

HANDLERS = handlers
PARSER = parsers
SRC = \

INCLUDES = -I./lib/mlx/ -I/usr/include -I./include/ -I./lib/libft/include/
LIBRARIES = -L$(LIB_PATH)/libft/build/bin/ -L$(LIB_PATH)/mlx/ -L/usr/lib -lft -lmlx -Ilmx -lXext -lX11 -lm -lz
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@mkdir -p $(dir $(NAME))
	make -C $(LIB_PATH)/libft
	make -C $(LIB_PATH)/mlx
	$(CC) $(CFLAGS) $(MAIN_FILE) $(SRC) $(INCLUDES) $(LIBRARIES) -o $@

debug:
	$(CC) $(CFLAGS) $(MAIN_FILE) $(SRC) $(LIBRARIES) $(INCLUDES) -o $(BUILD_PATH)/bin/debug -g3

project:
	mkdir -p src
	mkdir -p lib
	mkdir -p include
	cp -r ~/repos/42_school/cursus/libft ./lib/
	touch main.c

clangd:
	bear -- make re

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
