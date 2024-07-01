/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:00:06 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/01 23:56:01 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "./LIBFT/libft.h"
#include "./MLX42/include/MLX42/MLX42.h"

int	ft_prueba(int i)
{
	if (i == 0)
		return (0);
	else
		return (1);
}
int main(void)
{
	mlx_texture_t* texture = mlx_load_png("./sprite/fondo.png");
	if(!texture)
	return(1);
	mlx_image_t img = mlx_texture_to_image(mlx, texture);
	if (mlx_image_to_window(mlx, img, 0, 0) < 0)
	return(1);
    mlx_loop(mlx_init(678, 455, "so_long", false));
    printf("hola mundo\n");
}