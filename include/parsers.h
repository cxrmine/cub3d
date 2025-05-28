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

typedef enum e_args {
	ARGS_PROG_NAME,
	ARGS_FILE_NAME,
}	t_args;

bool	parse_noargs(const int ac);
bool	parse_manyargs(const int ac);
bool	parse_map_extvalid(const char *arg);
bool	parse_map_fdvalid(const char *arg);
void	parse_map(const char *arg);
void	parse_args(const int ac);

#endif
