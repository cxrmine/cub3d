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
#include "libft.h"
#include "parsers.h"

int	main(int argc, char **argv)
{
	parse_args(argc);
	parse_map(argv[ARGS_FILE_NAME]);
	return (EXIT_SUCCESS);
}
