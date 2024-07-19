/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:08:36 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/18 20:20:35 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

/*INCLUDES */

# include <stdio.h>
# include <unistd.h>
# include "../MLX42-master/include/MLX42/MLX42.h"
# include "../LIBGNL/libft.h"
# include <stdlib.h>
# include <fcntl.h>

# define EMPTY 48
# define COLECT 67
# define WALL 49
# define PLAYER 80
# define EXIT 69

/*	ENUM	*/
typedef enum e_direction
{
	UP,
	LEFT,
	DOWN,
	RIGHT,
	DIRECTION
}	t_direction;

/*	STRUCT	*/


typedef struct s_game
{
	void		*win;
	void		*mlx;
	int32_t		width;
	int32_t		len;
	t_map		*map;
	int			player;
	int			exit;
	t_pos		pos;
	int			count;

}	t_game;

typedef struct s_map
{
	char	**map;
	char	**relative_path;
}	t_map;

typedef struct s_pos
{
	int		y;
	int		x;
}	t_pos;

typedef struct s_image
{
	char	*relative_path;
	char	*name;
}	t_image;

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif
#endif