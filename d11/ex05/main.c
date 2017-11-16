/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:14:06 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 19:29:21 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_params(int ac, char **av);

int main(int ac, char **av)
{
	t_list *list;
	list = ft_list_push_params(ac, av);

	if (list !=0)
	{
		while (list != 0)
		{
			printf("%s", list->data);
			list = list->next;
		}
	}
	else
		printf("list is null");	
}
