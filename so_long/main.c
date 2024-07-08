/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:38:37 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/08 20:44:30 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_prueba(int i)
{
	if (i == 0)
		return (0);
	else
		return (1);
}

int	main(void)
{
	mlx_texture_t* texture = mlx_load_png("./sprite/fondo.png");
	if(!texture)
	return(1);
	mlx_image_t img = mlx_texture_to_image(mlx, texture);
	if (mlx_image_to_window(mlx, img, 10, 10) < 0)
	return(1);
    mlx_loop(mlx_init(678, 455, "so_long", false));
    printf("hola mundo\n");
}	int i;
	int j;
	mlx_t *mlx = mlx_init(500, 700, "prueba", true);
	
	mlx_texture_t* texture = mlx_load_png("./sprite/fondo.png");
	if(!texture)
	return(1);
	mlx_image_t *img = mlx_texture_to_image(mlx, texture);
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 5)
		{
			if (mlx_image_to_window(mlx, img, j*100, i*100) < 0)
				return(1);
			j++;
		}
		i++;
	}
   mlx_loop(mlx);
    printf("hola mundo\n");
}