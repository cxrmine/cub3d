/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalkawi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 10:01:30 by tmalkawi          #+#    #+#             */
/*   Updated: 2025/05/21 10:01:30 by tmalkawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSERS_H
# define PARSERS_H

# include <stdbool.h>

# define FILE_EXTENSION 1
# define ERR_BADSTRING "InputError: You must provide a map\n"

bool	parse_map_extvalid(const char *arg);
bool	parse_map_fdvalid(const char *arg);
bool	parse_map(const char *arg);

#endif
