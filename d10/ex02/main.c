/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:05:33 by laustin           #+#    #+#             */
/*   Updated: 2017/11/06 17:17:02 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_map(int *tab, int length, int (*f)(int));

int addone(int a)
{
	return (a + 1);
}

int main(void)
{
	int tab[] = {0, 1, 2, 3, 4};
	int length = 5;
	int (*f)(int);
	int i;

	f = &addone;

	int *arr = ft_map(tab, length, f);
	i = 0;
	while (i < length)
	{
		printf("%i", arr[i]);
		i++;
	}
}
