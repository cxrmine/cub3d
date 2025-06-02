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
#include <stdlib.h>

void	init_player(t_game *game)
{
	if (game == NULL)
		return ;
	game->player->img = malloc(sizeof(t_image));
	if (game->player->img == NULL)
		return ;
}
