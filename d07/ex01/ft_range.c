/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:53:54 by laustin           #+#    #+#             */
/*   Updated: 2017/11/01 21:42:47 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int length;
	int count;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	else
	{
		length = max - min;
		arr = (int*)malloc(sizeof(*arr) * (length));
		count = 0;
		while (count < length)
		{
			arr[count] = min + count;
			count++;
		}
		return (arr);
	}
}
