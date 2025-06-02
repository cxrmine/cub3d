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
PARSERS = parsers
SRC = $(SRC_PATH)/$(PARSERS)/parse_map_extvalid.c \
	  $(SRC_PATH)/$(PARSERS)/parse_map_fdvalid.c \
	  $(SRC_PATH)/$(PARSERS)/parse_map.c \
	  $(SRC_PATH)/$(PARSERS)/parse_args.c \
	  $(SRC_PATH)/$(PARSERS)/parse_noargs.c \
	  $(SRC_PATH)/$(PARSERS)/parse_manyargs.c \
	  $(SRC_PATH)/$(HANDLERS)/handle_err.c \


SRC_OBJECT = $(addprefix build/, $(patsubst %.c, %.o, $(SRC)))
INCLUDES = -I./$(SUBS_PATH)/mlx/ -I/usr/include -I./include/ -I./$(SUBS_PATH)/libft/include/
LIBRARIES = -L$(SUBS_PATH)/libft/build/bin/ -L$(SUBS_PATH)/mlx/ -L/usr/lib -lft -lmlx -Ilmx -lXext -lX11 -lm -lz
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_OBJECT)
	make -C $(SUBS_PATH)/libft
	make -C $(SUBS_PATH)/mlx
	$(CC) $(CFLAGS) $(MAIN_FILE) $(SRC) $(INCLUDES) $(LIBRARIES) -o $@

$(BUILD_PATH)/%.o: %.c
	@mkdir -p $(dir $(NAME))
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

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

.PHONY: all clean fclean re
