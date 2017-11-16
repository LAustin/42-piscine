/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 15:23:49 by laustin           #+#    #+#             */
/*   Updated: 2017/10/26 15:33:38 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_swap(int *a, int *b);

int     main(void)
{
	int a;
	int b;
	int *ptr_a;
	int *ptr_b;

	a = 2;
	b = 5;
	ptr_a = &a;
	ptr_b = &b;
	
	printf("a");
	printf("%i", a);
	printf("\n");
	printf("b");
	printf("%i", b);
	printf("\n");
	ft_swap(ptr_a, ptr_b);
	printf("a");
	printf("%i", a);
	printf("\n");
	printf("b");
	printf("%i", b);
}
