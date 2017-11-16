/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 17:07:22 by laustin           #+#    #+#             */
/*   Updated: 2017/11/01 21:45:04 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int *ft_range(int min, int max);
void    putarr(int *arr);

int main(void)
{
	int *arr;
	int *arr2;
	arr = ft_range(5, 9);
	arr2 = ft_range(9, 4);
	//printf("%lu", sizeof(arr));
	//putarr(arr);
	putarr(arr2);
}

void	putarr(int *arr)
{
	int i;
	
	i = 0;
	if (arr == NULL)
		printf("NULLLLLLL");
	else
	{	
		while (i < 1)
		{
			printf("%i", arr[i]);
			i++;
		}
	}
}

