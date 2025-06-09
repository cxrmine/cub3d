/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 15:33:46 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/09 15:51:14 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"
#include "checkers.h"

void	check_args(const int ac)
{
	if (check_noargs(ac))
		return (handle_err("Please provide an input, a map by preference",
				ERR_BADARGS));
	if (check_manyargs(ac))
		return (handle_err("Too many arguments provided", ERR_BADARGS));
	return ;
}
