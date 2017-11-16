/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 13:33:19 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 16:14:17 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(void)
{
	int i;
	int a;
	int b;
	int c;
	int d;

	i=12;
	a=0;
	b=-1;
	c=13;
	d=1;
	ft_recursive_factorial(i);
	printf("%i\n", ft_recursive_factorial(i));
	printf("%i\n", ft_recursive_factorial(a));
	printf("%i\n", ft_recursive_factorial(b));
	printf("%i\n", ft_recursive_factorial(c));
	printf("%i\n", ft_recursive_factorial(d));
}
