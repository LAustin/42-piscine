/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:40:37 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 15:57:02 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *newelement;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		newelement = ft_create_elem(data);
		newelement->next = *begin_list;
		*begin_list = newelement;
	}
}
