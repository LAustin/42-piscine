/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 15:39:34 by laustin           #+#    #+#             */
/*   Updated: 2017/10/26 16:13:46 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a = 5;
	int b = 2;
	int c = 0;
	int d = 0;
	int *result;
	int *mod;

	result = &c;
	mod = &d;
	printf("before: %i %i %d %d", a, b, *result, *mod);
	ft_div_mod(a, b, result, mod);
	printf("after: %i %i %d %d", a, b, *result, *mod);

}	
