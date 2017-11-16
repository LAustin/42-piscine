/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:54:00 by laustin           #+#    #+#             */
/*   Updated: 2017/11/07 19:33:05 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*newelement;
	int		i;

	list = 0;
	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			if (list == 0)
			{
				list = ft_create_elem(av[i]);
			}
			else
			{
				newelement = ft_create_elem(av[i]);
				newelement->next = list;
				list = newelement;
			}
			i++;
		}
	}
	return (list);
}
