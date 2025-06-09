/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 09:56:47 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/21 09:56:47 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "game.h"
#include "handlers.h"
#include "initializers.h"
#include "libft.h"
#include "map.h"
#include "parsers.h"
#include "checkers.h"

int	main(int argc, char **argv)
{
	t_game	*game;

	check_args(argc);
	check_map(argv[ARGS_FILE_NAME]);
	game = init();
	if (game == NULL)
		return (EXIT_FAILURE);
	parse_map(argv[ARGS_FILE_NAME], game);
	handle_memalloc(game);
	return (EXIT_SUCCESS);
}
