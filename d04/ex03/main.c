/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 20:46:37 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 21:10:20 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{

	printf("%i\n", ft_recursive_power(10, 5));
	printf("%i\n", ft_recursive_power(1, 10));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(-10, 5));
	printf("%i\n", ft_recursive_power(10, -10));
}
