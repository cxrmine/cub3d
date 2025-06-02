/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:07:54 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/02 14:07:54 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

typedef struct s_texture	t_texture;
typedef struct s_map		t_map;
typedef struct s_player		t_player;
typedef struct s_image		t_image;

typedef struct s_game {
	t_map		*map;
	t_texture	*texture_north;
	t_texture	*texture_south;
	t_texture	*texture_east;
	t_texture	*texture_west;
	t_player	*player;
}	t_game;

typedef struct s_map {
	const char	*map_matrix;
	char		**map_string;
}	t_map;

typedef struct s_texture {
	const char	*image_path;
	t_image		*mlx_image;
}	t_texture;

typedef struct s_player {
	const char	*orientation;
	t_image		*img;
	int			pos_x;
	int			pos_y;
	int			pos_z;
}	t_player;

typedef struct s_image {
	void	*image;
}	t_image;

#endif
