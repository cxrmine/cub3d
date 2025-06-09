/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:52:50 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/09 15:53:23 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "handlers.h"
#include "libft.h"
#include <fcntl.h>
#include <stdbool.h>

static char	*convert_map(int fd);
static char	*realloc_append(const char **s1, const char *s2);

void	parse_map(const char *arg, t_game *game)
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
		append = realloc_append((const char **) &append, line);
		free(line);
		if (append == NULL)
			break ;
	}
	return (append);
}

static char	*realloc_append(const char **s1, const char *s2)
{
	char		*append;

	if (ft_strnul(s2))
		return (NULL);
	append = ft_calloc(ft_strlen(*s1) + ft_strlen(s2) + 1, sizeof(char));
	if (append == NULL)
		return (NULL);
	ft_strlcpy(append, *s1, ft_strlen(*s1) + 1);
	ft_strlcat(append, s2, ft_strlen(*s1) + ft_strlen(s2) + 1);
	free((char *) *s1);
	return (append);
}
