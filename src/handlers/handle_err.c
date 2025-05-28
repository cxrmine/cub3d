/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_err.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:20:45 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/28 10:20:45 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handlers.h"
#include "libft.h"

void	handler_err(const char *err)
{
	if (ft_strnnul(err))
		return (exit(EXIT_FAILURE));
}
