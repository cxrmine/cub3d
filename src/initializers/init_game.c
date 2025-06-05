/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:16:16 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 15:16:16 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"
#include "handlers.h"
#include "initializers.h"
#include "libft.h"
#include <stdlib.h>

t_game	*init_game(void)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (game == NULL)
		return (NULL);
	ft_bzero(game, sizeof(t_game));
	init_texture(game);
	return (game);
}
