/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_textures.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 12:13:29 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/10 12:13:29 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "checkers.h"

char	*parse_textures(char *texture_config)
{
	char	**split;
	size_t	i;
	char	*path;

	if (ft_strnul(texture_config))
		return (NULL);
	split = ft_split(texture_config, ' ');
	if (split == NULL)
		return (NULL);
	if (ft_strslen((const char **) split) != 2)
		return (NULL);
	i = -1;
	while (split[++i])
		if (i == TEXTURE_PATH)
			break ;
	path = ft_strdup(split[i]);
	ft_free_tab((void **) split);
	return (path);
}
