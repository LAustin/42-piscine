/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:14:29 by laustin           #+#    #+#             */
/*   Updated: 2017/11/06 19:26:32 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int ainarr(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	//char *arr0 = "hello";
   	//char *arr1 = "hallo";
	//char *arr2 = "who";	
	char *arr3[4];
	arr3[0] = "ha";
	arr3[1] = "haama";
	arr3[2] = "ha";
	arr3[3] = 0;
	int (*f)(char*);
	f = &ainarr;

	printf("%d", ft_count_if(arr3, f));
}
