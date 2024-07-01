/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:08:36 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/01 22:12:29 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef SO_LONG_H
# define SO_LONG_H

/*	INCLUDES */

# include <stdio.h>
# include <unistd.h>
# include <mlx.h>
# include <stdlib.h>
# include <fcntl.h>

/*	DEFINE	*/

# define EMPTY 48
# define COLECT 67
# define WALL 49
# define PLAYER 80
# define EXIT 69

/*	ENUM	*/

typedef enum e_type
{
	T_PLAYER,
	T_COLLECTIBLE,
	T_EXIT,
	T_WALL,
	T_FLOOR,
	TYPE
}

typedef enum e_direction
{
	UP,
	LEFT,
	DOWN,
	RIGHT,
	DIRECTION
}

/*	STRUCT	*/

struct s_sprite
{
	mlx_image_t		*floor;
	mlx_image_t		*wall;
	mlx_image_t		*player;
	mlx_image_t		*colecctible;
	mlx_image_t		*exit;
}

typedef struct s_mlx	
{
	void	*win;
	void	*mlx;
	char	**map;
	int		count;
	
}

typedef struct pos
{
	int		y;
	int		x;
}





