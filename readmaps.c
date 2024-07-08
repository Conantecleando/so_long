/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:08:04 by davidrol          #+#    #+#             */
/*   Updated: 2024/07/04 23:50:26 by davidrol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_linelenght(int fd)
{
	char	buffer[1];
	int		length;
	int		bytes;

	buffer[1] = '\0';
	bytes = 1;
	length = 0;
	while (bytes == 1)
	{
		bytes = read(fd, buffer, 1);
		if (buffer[0] != '\n')
			length++;
		else
			break ;
	}
	return (length);
}

int	ft_countlines(int fd)
{
	char	buffer[1];
	int		line;
	int		bytes;

	buffer[1] = '\0';
	bytes = 1;
	line = 0;
	while (bytes == 1)
	{
		bytes = read(fd, buffer, 1);
		if (buffer[0] == '\n')
			line++;
		else
			break ;
	}
	return (line);
}
