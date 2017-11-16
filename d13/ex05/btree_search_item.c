/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:12:39 by laustin           #+#    #+#             */
/*   Updated: 2017/11/09 21:09:14 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *x;

	if (root)
	{
		x = btree_search_item(root->left, data_ref, cmpf);
		if (x != 0)
			return (x);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		x = btree_search_item(root->right, data_ref, cmpf);
		if (x != 0)
			return (x);
	}
	return (0);
}
