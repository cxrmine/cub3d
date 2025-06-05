/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:41:27 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 15:41:27 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "initializers.h"
#include "libft.h"
#include <stdlib.h>

bool	init_player(t_game *game)
{
	if (game == NULL)
		return (false);
	game->player = malloc(sizeof(t_player));
	if (game->player == NULL)
		return (false);
	ft_bzero(game->player, sizeof(t_player));
	game->player->img = malloc(sizeof(t_image));
	if (game->player->img == NULL)
		return (false);
	ft_bzero(game->player->img, sizeof(t_image));
	return (true);
}
