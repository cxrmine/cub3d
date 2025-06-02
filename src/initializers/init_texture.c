/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:28:58 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 15:28:58 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "initializers.h"
#include "libft.h"
#include <stdlib.h>

void	init_texture(t_game *game)
{
	if (game == NULL)
		return ;
	game->texture_east = malloc(sizeof(t_texture));
	game->texture_north = malloc(sizeof(t_texture));
	game->texture_south = malloc(sizeof(t_texture));
	game->texture_west = malloc(sizeof(t_texture));
	if (game->texture_south || game->texture_west
		|| game->texture_east || game->texture_north)
		return ;
	ft_bzero(game->texture_east, sizeof(t_texture));
	ft_bzero(game->texture_north, sizeof(t_texture));
	ft_bzero(game->texture_west, sizeof(t_texture));
	ft_bzero(game->texture_south, sizeof(t_texture));
	return ;
}
