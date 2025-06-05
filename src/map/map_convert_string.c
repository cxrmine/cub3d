/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_convert_string.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:09:41 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/06/05 14:09:41 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*map_convert_string(const char **s1, const char *s2)
{
	char		*append;

	if (ft_strnul(s2))
		return (NULL);
	append = ft_calloc(ft_strlen(*s1) + ft_strlen(s2) + 1, sizeof(char));
	if (append == NULL)
		return (NULL);
	ft_strlcpy(append, *s1, ft_strlen(*s1) + 1);
	ft_strlcat(append, s2, ft_strlen(*s1) + ft_strlen(s2) + 1);
	free((char *) *s1);
	return (append);
}
