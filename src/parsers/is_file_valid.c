/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_file_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:58:02 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/21 12:58:02 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsers.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

bool	is_file_valid(const char *arg)
{
	int	fd;

	if (arg == NULL)
		return (NULL);
	if (arg[0] == '\0')
		return (NULL);
	fd = open(arg, O_RDONLY, 0777);
	if (fd < 0)
		return (close(fd), false);
	close(fd);
	return (true);
}
