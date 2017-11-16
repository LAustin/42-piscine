/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:14:06 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 20:34:15 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list **begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);

int main(void)
{
	char *str = "hello";
	char *str2 = "hi";
	char *str3 = "third";
	t_list *list = NULL;
	ft_list_push_front(&list, str);
	ft_list_push_front(&list, str2);
	ft_list_push_front(&list, str3);
	
	ft_list_clear(&list);

	if (list != 0)
	{
		printf("%s", list->data);
		if (list->next != 0)
			if (list->next->next != 0)
				printf("wrong");
	}
	if (list == 0)
		printf("last element is null");
/*		while (list != 0)
		{
			printf("%s", list->data);
			list = list->next;
		}
	}
	else
		printf("list is null");	
*/	
}
