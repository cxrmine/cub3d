/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:38:39 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 15:38:39 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "initializers.h"
#include "libft.h"
#include <stdlib.h>

bool	init_map(t_game *game)
{
	if (game == NULL)
		return (false);
	game->map = malloc(sizeof(t_map));
	if (game->map == NULL)
		return (false);
	ft_bzero(game->map, sizeof(t_map));
	return (true);
}
