/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jandre-d <jandre-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:55:39 by jandre-d       #+#    #+#                */
/*   Updated: 2019/02/06 11:45:32 by tde-jong      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define TRUE 1
# define FALSE 0
# define EMPTY_CHAR '.'
# define INPUT_BLOCK_CHAR '#'
# include "libft/libft.h"
# include <fcntl.h>

typedef struct	s_tetrimino
{
	char				**array;
	int					w;
	int					h;
	char				value;
	struct s_tetrimino	*next;
}				t_tetrimino;

typedef struct	s_map
{
	char	**field;
	int		field_size;
}				t_map;

#endif
