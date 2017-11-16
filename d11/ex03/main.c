/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:57:36 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 16:30:35 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);

int	main(void)
{
	char *str = "hello";
	char *str2 = "hi";
	char *str3 = "third";
	t_list *list = NULL;
	ft_list_push_front(&list, str);
	ft_list_push_front(&list, str2);
	ft_list_push_front(&list, str3);
	ft_list_push_front(&list, str3);

	//while (list !=NULL)
	//{
	//	printf("%s\n", list->data);
	//	list = list->next;
	//}

	printf("%d\n", ft_list_size(list)); 
}
