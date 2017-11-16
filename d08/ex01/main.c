/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:42:51 by laustin           #+#    #+#             */
/*   Updated: 2017/11/02 21:53:27 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int	main(void)
{
	int c;
	int d;
	int *a;
	int *b;

	c = 5;
	d = 10;
	a = &c;
	b = &d;

	ft_putchar('t');
	ft_putchar('\n');
	ft_swap(a, b);
	ft_putstr("hello");
	ft_strlen("hello");
	printf("\n%d", ft_strcmp("hey", "how"));

}
