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
	ft_printf("ac = %d\n", argc);
	ft_printf("av[1] = %s\n", argv[1]);
	if (!is_argument_valid(argv[1]))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
