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

# importanr stuff
# change as needed
NAME = $(BUILD_PATH)/bin/cub3D
MAIN_FILE = main.c

# the paths needed to compiles files
# change as or if needed
BUILD_PATH = build
SUBS_PATH = subs
SRC_PATH = src
HANDLERS = handlers
INITIALIZERS = initializers
CHECKERS = checkers
PARSERS = parsers
MAP = map
SRC = main.c \
	  $(SRC_PATH)/$(CHECKERS)/check_map_extvalid.c \
	  $(SRC_PATH)/$(CHECKERS)/check_map_fdvalid.c \
	  $(SRC_PATH)/$(CHECKERS)/check_map.c \
	  $(SRC_PATH)/$(CHECKERS)/check_args.c \
	  $(SRC_PATH)/$(CHECKERS)/check_noargs.c \
	  $(SRC_PATH)/$(CHECKERS)/check_manyargs.c \
	  $(SRC_PATH)/$(CHECKERS)/check_textures.c \
	  $(SRC_PATH)/$(HANDLERS)/handle_err.c \
	  $(SRC_PATH)/$(HANDLERS)/handle_memalloc.c \
	  $(SRC_PATH)/$(INITIALIZERS)/init.c \
	  $(SRC_PATH)/$(INITIALIZERS)/init_game.c \
	  $(SRC_PATH)/$(INITIALIZERS)/init_image.c \
	  $(SRC_PATH)/$(INITIALIZERS)/init_map.c \
	  $(SRC_PATH)/$(INITIALIZERS)/init_player.c \
	  $(SRC_PATH)/$(INITIALIZERS)/init_texture.c \
	  $(SRC_PATH)/$(PARSERS)/parse_map.c \


SRC_OBJECT = $(addprefix build/, $(patsubst %.c, %.o, $(SRC)))
INCLUDES = -I./$(SUBS_PATH)/mlx/ -I/usr/include -I./include/ -I./$(SUBS_PATH)/libft/include/
LIBRARIES = -L$(SUBS_PATH)/libft/build/bin/ -L$(SUBS_PATH)/mlx/ -L/usr/lib -lft -lmlx -Ilmx -lXext -lX11 -lm -lz
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_OBJECT)
	make -C $(SUBS_PATH)/libft
	make -C $(SUBS_PATH)/mlx
	$(CC) $(CFLAGS) $(SRC_OBJECT) $(INCLUDES) $(LIBRARIES) -o $@ -g3

$(BUILD_PATH)/%.o: %.c
	@mkdir -p $(dir $(NAME))
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@ -g3

clean:
	rm -f $(OBJS)
	make -C $(SUBS_PATH)/libft clean
	make -C $(SUBS_PATH)/mlx clean
	
fclean: clean
	rm -f $(NAME)
	make -C $(SUBS_PATH)/libft fclean 

re: fclean all

##
## PERSONAL STUFF
##

clangd:
	bear -- make re

debug:
	$(CC) $(CFLAGS) $(SRC) $(INCLUDES) $(LIBRARIES) -o debug -g3

.PHONY: all clean fclean re
