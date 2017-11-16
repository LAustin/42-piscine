/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:54:00 by laustin           #+#    #+#             */
/*   Updated: 2017/11/06 18:04:24 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *mappedarr;

	mappedarr = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		mappedarr[i] = (*f)(tab[i]);
		i++;
	}
	return (mappedarr);
}
