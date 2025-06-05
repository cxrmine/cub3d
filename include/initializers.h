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

void	init_game(t_game *game);
t_game	*init(void);
void	init_image(t_game *game);
void	init_map(t_game *game);
void	init_player(t_game *game);
void	init_texture(t_game *game);

#endif
