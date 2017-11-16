/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:28:28 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 16:55:42 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(void)
{
	    int i;
		int a;
	    int b;
		int c;
		int d;
		int exp;

		i=-5;
		a=0;
		b=1;
		c=4;
		d=1000000000;
		exp=10;

		printf("%i\n", ft_iterative_power(-5, 10));
		printf("%i\n", ft_iterative_power(0, 10));
		printf("%i\n", ft_iterative_power(1, 10));
		printf("%i\n", ft_iterative_power(4, 10));
		printf("%i\n", ft_iterative_power(10, -5));
		printf("%i\n", ft_iterative_power(10, 0));
		printf("%i\n", ft_iterative_power(0, 0));
}
