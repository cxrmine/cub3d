/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_extension_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:57:26 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/21 12:56:04 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>
#include "checkers.h"

bool	check_map_extvalid(const char *arg)
{
	char	**ext;

	if (arg == NULL)
		return (false);
	if (arg[0] == '\0')
		return (false);
	ext = ft_split(arg, '.');
	if (ext == NULL)
		return (false);
	if (ext[FILE_EXTENSION] == NULL)
		return (ft_free_tab((void **) ext), false);
	if (ft_strcmp(ext[FILE_EXTENSION], "cub") != 0)
		return (ft_free_tab((void **) ext), false);
	ft_free_tab((void **) ext);
	return (true);
}
