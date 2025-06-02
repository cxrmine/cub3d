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

void	map_convert_matrix(const char *arg, t_game *game)
{
	int		fd;
	char	*line;
	char	*append;

	(void) game;
	if (ft_strnul(arg))
		return (handle_err("Expected arg to be string, got (nil) instead",
				ERR_BADARGS));
	fd = open(arg, O_RDONLY, 0777);
	if (fd == -1)
		return (handle_err("Failed to read file", ERR_BADFILE));
	while (true)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		append = map_convert_string(append, line);
		free(line);
	}
	close(fd);
}
