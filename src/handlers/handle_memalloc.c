/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_memalloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:19:53 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/05 13:19:53 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "handlers.h"
#include "libft.h"
#include <stdlib.h>

static void	free_map(t_game *game);
static void	free_textures(t_game *game);

void	handle_memalloc(t_game *game)
{
	if (game == NULL)
		return ;
	if (game->texture_east->mlx_image)
		free(game->texture_east->mlx_image);
	if (game->texture_north->mlx_image)
		free(game->texture_north->mlx_image);
	if (game->texture_west->mlx_image)
		free(game->texture_west->mlx_image);
	if (game->texture_south->mlx_image)
		free(game->texture_south->mlx_image);
	if (game->player->img)
		free(game->player->img);
	if (game->player)
		free(game->player);
	free_map(game);
	free_textures(game);
	free(game);
}

static void	free_textures(t_game *game)
{
	if (game->texture_east->image_path)
		free((char *) game->texture_east->image_path);
	if (game->texture_north->image_path)
		free((char *) game->texture_north->image_path);
	if (game->texture_west->image_path)
		free((char *) game->texture_west->image_path);
	if (game->texture_south->image_path)
		free((char *) game->texture_south->image_path);
	if (game->texture_east)
		free(game->texture_east);
	if (game->texture_north)
		free(game->texture_north);
	if (game->texture_west)
		free(game->texture_west);
	if (game->texture_south)
		free(game->texture_south);
}

static void	free_map(t_game *game)
{
	size_t	i;

	i = -1;
	while (++i < ft_strslen((const char **) game->map->map_matrix))
		free(game->map->map_matrix[i]);
	if (game->map->map_matrix)
		free(game->map->map_matrix);
	if (game->map->map_string)
		free((char *) game->map->map_string);
	if (game->map)
		free(game->map);
}
