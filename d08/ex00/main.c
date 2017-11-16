/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:26:07 by laustin           #+#    #+#             */
/*   Updated: 2017/11/02 20:49:17 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char **ft_split_whitespaces(char *str);

int main(void)
{
	int i;
	char *str = "this is a string";
	ft_split_whitespaces(str);
	
	char **result = ft_split_whitespaces(str);
	i = 0;
	while (i<5)
	{
		printf("%s\n", result[i]);
		i++;
	}
	printf("%s\n", str);	

	char *str2 = " this is a\n\t string      ";
	char **result2 = ft_split_whitespaces(str2);
	int j;
	j = 0;
	while (j<5)
	{
		printf("%s\n", result2[j]);
		j++;
	}
}
