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

#include "initializers.h"
#include <stdlib.h>

void	init_map(t_game *game)
{
	if (game == NULL)
		return ;
	game->map = malloc(sizeof(t_map));
	if (game->map == NULL)
		return ;
}
