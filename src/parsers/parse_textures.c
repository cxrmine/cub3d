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
	bool	whitespace;

	if (ft_strnul(texture_config))
		return (NULL);
	split = ft_split(texture_config, ' ');
	if (split == NULL)
		return (NULL);
	if (ft_strslen((const char **) split) != 2)
		return (ft_free_tab((void **) split), NULL);
	i = -1;
	whitespace = false;
	while (texture_config[++i])
	{
		if (ft_iswhitespace(texture_config[i]))
			whitespace = true;
		if (whitespace == true && !ft_iswhitespace(texture_config[i]))
			break ;
	}
	ft_free_tab((void **) split);
	return (ft_substr(texture_config, i, ft_strlen(texture_config) - i - 1));
}
