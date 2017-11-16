/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 18:40:47 by laustin           #+#    #+#             */
/*   Updated: 2017/10/26 18:53:00 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int     main(void)
{
	char *str = "this is a string to count";
	int count;

	count = ft_strlen(str);
	printf("count: %i", count);
}

