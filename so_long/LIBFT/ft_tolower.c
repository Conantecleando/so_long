/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:25:44 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/19 23:35:54 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)

{
	while (ch >= 65 && ch <= 90)
		return (ch + 32);
	return (ch);
}
