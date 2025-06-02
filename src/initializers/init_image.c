/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_image.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:45:19 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 15:45:19 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "initializers.h"
#include <stdio.h>
#include <stdlib.h>

void	init_image(t_game *game)
{
	if (game == NULL)
		return ;
	game->player->img = malloc(sizeof(t_image));
	game->texture_east->mlx_image = malloc(sizeof(t_image));
	game->texture_west->mlx_image = malloc(sizeof(t_image));
	game->texture_south->mlx_image = malloc(sizeof(t_image));
	game->texture_north->mlx_image = malloc(sizeof(t_image));
}
