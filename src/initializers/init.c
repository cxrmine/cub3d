/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:06:00 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/05 13:06:00 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "handlers.h"
#include "initializers.h"
#include <stdlib.h>

t_game	*init(void)
{
	t_game	*game;

	game = init_game();
	if (game == NULL)
		return (NULL);
	if (!init_map(game))
		return (handle_memalloc(game), NULL);
	if (!init_player(game))
		return (handle_memalloc(game), NULL);
	return (game);
}
