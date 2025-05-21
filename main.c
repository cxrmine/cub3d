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

int	main(int argc, char **argv)
{
	ft_printf("ac = %d\n", argc);
	ft_printf("*av = %s", *argv);
	return (EXIT_SUCCESS);
}
