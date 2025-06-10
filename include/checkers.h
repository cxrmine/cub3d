/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:19:16 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/09 15:19:16 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKERS_H
# define CHECKERS_H

# include <stdbool.h>
# include "game.h"

# define FILE_EXTENSION 1
# define TEXTURE_PATH 1

typedef enum e_args {
	ARGS_PROG_NAME,
	ARGS_FILE_NAME,
}	t_args;

bool	check_noargs(const int ac);
bool	check_manyargs(const int ac);
bool	check_map_extvalid(const char *arg);
bool	check_map_fdvalid(const char *arg);
bool	check_textures(t_game *game);
void	check_map(const char *arg);
void	check_args(const int ac);

#endif
