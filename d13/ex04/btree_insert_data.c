/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:56:18 by laustin           #+#    #+#             */
/*   Updated: 2017/11/09 19:07:25 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!(*root))
		*root = btree_create_node(item);
	else
	{
		if (cmpf((*root)->item, item) > 0)
		{
			if ((*root)->left != 0)
				btree_insert_data(&((*root)->left), item, cmpf);
			else
				(*root)->left = btree_create_node(item);
		}
		else
		{
			if ((*root)->right != 0)
				btree_insert_data(&((*root)->right), item, cmpf);
			else
				(*root)->right = btree_create_node(item);
		}
	}
}
