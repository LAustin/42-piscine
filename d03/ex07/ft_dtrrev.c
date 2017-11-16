/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtrrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 19:33:18 by laustin           #+#    #+#             */
/*   Updated: 2017/10/26 21:31:38 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int strlen;
	int counter;
	char copy;
	char value;

	strlen = 0;
	printf("%d \n", strlen);
	value = *str;
	while (value != '\0')
	{
		str++;
		value = *str;
		strlen++;
		printf("\n%d\n", strlen);
	}
	counter = 0;
	while (counter < strlen)
	{
		copy = str[strlen - counter]; 
		str[strlen - counter] = str[counter];
		str[counter] = copy;
		counter++;
	}
	return (str);
}
