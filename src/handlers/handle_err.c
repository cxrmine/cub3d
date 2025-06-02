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
#include <errno.h>
#include <string.h>

void	handle_err(const char *err, const char *err_type)
{
	if (ft_strnul(err))
		return (exit(EXIT_FAILURE));
	if (errno > 0)
		printf("Caught error: %s\n", strerror(errno));
	printf("%s: %s\n", err_type, err);
	exit(EXIT_FAILURE);
}
