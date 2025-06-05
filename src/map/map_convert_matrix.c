/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_convert_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:52:50 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 14:52:50 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "handlers.h"
#include "libft.h"
#include "map.h"
#include <fcntl.h>
#include <stdbool.h>

static char	*convert_map(int fd);

void	map_convert_matrix(const char *arg, t_game *game)
{
	int		fd;
	char	*append;
	char	**split;

	(void) game;
	if (ft_strnul(arg))
		return (handle_err("Expected arg to be string, got (nil) instead",
				ERR_BADARGS));
	fd = open(arg, O_RDONLY, 0777);
	if (fd == -1)
		return (handle_err("Failed to read file", ERR_BADFILE));
	append = convert_map(fd);
	close(fd);
	split = ft_split(append, '\n');
	game->map->map_matrix = split;
	game->map->map_string = append;
}

static char	*convert_map(int fd)
{
	char	*line;
	char	*append;

	append = ft_strdup("");
	while (true)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		append = map_convert_string((const char **) &append, line);
		free(line);
		if (append == NULL)
			break ;
	}
	return (append);
}
