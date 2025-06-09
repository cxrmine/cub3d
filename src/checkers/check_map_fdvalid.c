/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_fdvalid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:58:02 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/09 15:51:24 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers.h"
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

bool	check_map_fdvalid(const char *arg)
{
	int	fd;

	if (ft_strnul(arg))
		return (false);
	fd = open(arg, O_RDONLY, 0777);
	if (fd < 0)
		return (close(fd), false);
	close(fd);
	return (true);
}
