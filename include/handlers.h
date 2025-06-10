/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 10:19:53 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/28 10:19:53 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLERS_H
# define HANDLERS_H

# define ERR_BADSTRING	"InputError"
# define ERR_BADEXT		"ExtensionError"
# define ERR_BADFILE	"FileError"
# define ERR_BADARGS	"ArgumentError"
# define ERR_BADALLOC	"AllocError"
# define ERR_BADCONF	"ConfigError"

# include "game.h"

void	handle_err(const char *err, const char *err_type);
void	handle_memalloc(t_game *game);

#endif
