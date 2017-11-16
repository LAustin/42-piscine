/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:04:51 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 16:32:02 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		count;

	list = begin_list;
	if (begin_list == 0)
		return (0);
	else
	{
		count = 1;
		while (list->next != 0)
		{
			count++;
			list = list->next;
		}
	}
	return (count);
}
