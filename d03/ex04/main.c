/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 16:06:55 by laustin           #+#    #+#             */
/*   Updated: 2017/10/26 16:24:21 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a = 5;
	int b = 2;
	int *ptr_a;
	int *ptr_b;

	ptr_a = &a;
	ptr_b = &b;
	printf("before: %d, %d", *ptr_a, *ptr_b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("\nafter: %d, %d", *ptr_a, *ptr_b);
}
