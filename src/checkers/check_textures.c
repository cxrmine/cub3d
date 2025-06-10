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
#include "parsers.h"

bool	check_textures(t_game *game)
{
	size_t	i;
	char	*tex_p;

	if (game == NULL)
		return (false);
	i = -1;
	while (game->map->map_matrix[++i])
	{
		tex_p = parse_textures(game->map->map_matrix[i]);
		if (tex_p == NULL)
			break ;
		if (ft_strncmp(game->map->map_matrix[i], "NO",
				ft_strlen("NO")) == 0)
			game->texture_north->image_path = tex_p;
		if (ft_strncmp(game->map->map_matrix[i], "SO",
				ft_strlen("SO")) == 0)
			game->texture_south->image_path = tex_p;
		if (ft_strncmp(game->map->map_matrix[i], "WE",
				ft_strlen("WE")) == 0)
			game->texture_west->image_path = tex_p;
		if (ft_strncmp(game->map->map_matrix[i], "EA",
				ft_strlen("EA")) == 0)
			game->texture_east->image_path = tex_p;
	}
	return (true);
}
