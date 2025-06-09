/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:01:30 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/21 10:01:30 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSERS_H
# define PARSERS_H

# include "game.h"

void	parse_map(const char *arg, t_game *game);
void	parse_textures(t_game *game);
void	parse_chart(t_game *game);

#endif
