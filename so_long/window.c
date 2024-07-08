/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:50:22 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/08 18:34:56 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


void	ft_winsize(char **argv, t_game data)
{
	int	fd;

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (stderr);
	data.pos.y = ft_countlines(fd);
	data.pos.x = ft_linelenght(fd);
	mlx_set_window_pos(data.mlx, data.pos.x, data.pos.y);
}
