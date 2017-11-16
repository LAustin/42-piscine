/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:50:23 by laustin           #+#    #+#             */
/*   Updated: 2017/11/09 14:01:45 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *tmp;

	tmp = malloc(sizeof(t_btree));
	if (tmp)
	{
		tmp->left = NULL;
		tmp->right = NULL;
		tmp->item = item;
	}
	return (tmp);
}
