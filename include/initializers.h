/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:14:43 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 15:14:43 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZERS_H
# define INITIALIZERS_H

# include "game.h"
# include <stdbool.h>

t_game	*init_game(void);
t_game	*init(void);
bool	init_image(t_game *game);
bool	init_map(t_game *game);
bool	init_player(t_game *game);
bool	init_texture(t_game *game);

#endif
