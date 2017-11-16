/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:41:36 by laustin           #+#    #+#             */
/*   Updated: 2017/11/06 20:36:24 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int subtract(int a, int b)
{
	return (a - b);
}

int main(void)
{
	int sortme[] = {-4, -2, 4, 4, 9};
	int length = 5;
	int (*f)(int, int);
	f = &subtract;
	printf("%d", ft_is_sort(sortme, length, f));
}
