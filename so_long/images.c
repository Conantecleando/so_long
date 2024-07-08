/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:39:28 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/08 19:00:50 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_image (char *name)
{
	t_image sprite[6]; 
	int	i;
	
	sprite[0] = (t_image){"1" "./sprite/muro.png"};
	sprite[1] = (t_image){"0" "./sprite/fondo.png"};
	sprite[2] = (t_image){"C" "./sprite/item1.png"};
	sprite[3] = (t_image){"P" "./sprite/pulpo01.png"};
	sprite[4] = (t_image){"E" "./sprite/salida1.png"};
	i = 0;
	while(sprite[i].name != NULL)
	(
		if (sprite[i].name[0] == name)
		{
			return (maps[i])
			break;
		}
		i++;
	)
	return(maps[5]);
}
