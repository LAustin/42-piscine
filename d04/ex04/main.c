/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 21:24:43 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 22:43:50 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(2));
	printf("%i\n", ft_fibonacci(5));
	printf("%i\n", ft_fibonacci(6));
	printf("%i\n", ft_fibonacci(10));
	printf("%i\n", ft_fibonacci(-20));
	printf("%i\n", ft_fibonacci(100));
}
