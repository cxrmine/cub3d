/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 09:32:28 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/28 09:32:28 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"
#include "libft.h"
#include "checkers.h"

void	check_map(const char *arg)
{
	if (ft_strnul(arg))
		return (handle_err("Expected a string, got (nil) instead",
				ERR_BADSTRING));
	if (!check_map_extvalid(arg))
		return (handle_err("invalid extension", ERR_BADEXT));
	if (!check_map_fdvalid(arg))
		return (handle_err("Invalid file", ERR_BADFILE));
}
