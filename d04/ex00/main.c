/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 09:50:05 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 16:04:39 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main(void) 
{
	int i;
	int c;
	int x;

	i = -12;
	c = 0;
	x = 5;
	ft_iterative_factorial(c);
	printf("%i\n", ft_iterative_factorial(i));
	printf("%i\n", ft_iterative_factorial(c));
	printf("%i\n", ft_iterative_factorial(x));
}
