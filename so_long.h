/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 21:08:36 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/03 22:59:20 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EMPTY 48
# define COLECT 67
# define WALL 49
# define PLAYER 80
# define EXIT 69

/*	INCLUDES */

# include <stdio.h>
# include <unistd.h>
# include "./MLX42/include/MLX42/MLX42.h"
# include "./LIBFT/libft.h"
# include <stdlib.h>
# include <fcntl.h>

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
typedef struct s_mlx	
{
	void	*win;
	void	*mlx;
	char	**map;
	int		count;

} t_mlx;

typedef struct s_pos
{
	int		y;
	int		x;
}	t_pos;


typedef struct	s_image
{
	char	**relative_path;
	char	**name;
}	t_image;

#endif