/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_textures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:51:30 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/09 15:51:30 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.h"
#include "game.h"
#include "libft.h"
#include "stdlib.h"

static char	*get_tp(char *texture_config);

bool	check_textures(t_game *game)
{
	size_t	i;

	if (game == NULL)
		return (false);
	i = -1;
	while (game->map->map_matrix[i++])
	{
		if (ft_strncmp(game->map->map_matrix[i], "NO",
				ft_strlen(game->map->map_matrix[i])) == 0)
			game->texture_north->image_path = get_tp(game->map->map_matrix[i]);
	}
	return (false);
}

static char	*get_tp(char *texture_config)
{
	char	**split;
	size_t	i;
	char	*path;

	if (ft_strnul(texture_config))
		return (NULL);
	split = ft_split(texture_config, ' ');
	if (split == NULL)
		return (NULL);
	if (ft_strslen((const char **) split) != 2)
		return (NULL);
	i = -1;
	while (split[++i])
		if (i == TEXTURE_PATH)
			break ;
	path = ft_strdup(split[i]);
	ft_free_tab((void **) split);
	return (path);
}
