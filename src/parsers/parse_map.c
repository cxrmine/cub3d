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
#include "parsers.h"

void	parse_map(const char *arg)
{
	if (ft_strnnul(arg))
		return (handler_err("Expected a string, got (nil) instead",
				ERR_BADSTRING));
}
