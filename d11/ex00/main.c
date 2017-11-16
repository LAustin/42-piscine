/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:57:36 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 11:26:28 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_putstr(char *str);

int	main(void)
{
	char *str = "hello";
	//int x = 5;
	//int *ptr = &x;
	//int ptr[] = {0, 1, 2, 3};
	
	//ft_putstr(ft_create_elem(str)->data);
	//printf("%d", (ft_create_elem(ptr)->data)[0]);
	printf("%s", (ft_create_elem(str)->data));

	if ((ft_create_elem(str)->next) == 0)
	{
		ft_putstr("NULL");
	}
}
