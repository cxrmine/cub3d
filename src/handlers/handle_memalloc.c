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

#include "handlers.h"
#include <stdlib.h>

void	handle_memalloc(t_game *game)
{
	if (game == NULL)
		return ;
	if (game->map)
		free(game->map);
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
	if (game->texture_east)
		free(game->texture_east);
	if (game->texture_north)
		free(game->texture_north);
	if (game->texture_west)
		free(game->texture_west);
	if (game->texture_south)
		free(game->texture_south);
	free(game);
}
