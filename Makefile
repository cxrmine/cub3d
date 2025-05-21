# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 16:17:55 by tmalkawi          #+#    #+#              #
#    Updated: 2025/05/21 10:46:05 by tmalkawi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(BUILD_PATH)/bin/cub3D
MAIN_FILE = main.c

BUILD_PATH = build
SUBS_PATH = subs
SRC_PATH = src

HANDLERS = handlers
PARSER = parsers
SRC = \

INCLUDES = -I./$(SUBS_PATH)/mlx/ -I/usr/include -I./include/ -I./$(SUBS_PATH)/libft/include/
LIBRARIES = -L$(SUBS_PATH)/libft/build/bin/ -L$(SUBS_PATH)/mlx/ -L/usr/lib -lft -lmlx -Ilmx -lXext -lX11 -lm -lz
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@mkdir -p $(dir $(NAME))
	make -C $(SUBS_PATH)/libft
	make -C $(SUBS_PATH)/mlx
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
