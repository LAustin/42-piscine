/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:56:59 by laustin           #+#    #+#             */
/*   Updated: 2017/11/09 16:06:18 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(void *str);
void	ft_putchar(char c);
void    btree_apply_prefix(t_btree *root, void (*applyf)(void *));
t_btree *btree_create_node(void *item);

int main(void)
{
	t_btree *tree;
	t_btree *a_node;
	t_btree *b_node;
	t_btree *c_node;
	t_btree *d_node;
	t_btree *e_node;
//	t_btree *f_node;
	t_btree *g_node;
	t_btree *h_node;
	t_btree *i_node;

	char *f = "F";
	char *b = "B";
	char *a = "A";
	char *g = "G";
	char *d = "D";
	char *c = "C";
	char *e = "E";
	char *i = "I";
	char *h = "H";

	tree = btree_create_node(f);
	b_node = btree_create_node(b);
	a_node = btree_create_node(a);
	g_node = btree_create_node(g);
	d_node = btree_create_node(d);
	c_node = btree_create_node(c);
	e_node = btree_create_node(e);
	i_node = btree_create_node(i);
	h_node = btree_create_node(h);

	tree->left = b_node;
	tree->left->left = a_node;
	tree->right = g_node;
	tree->left->right = d_node;
	tree->left->right->left = c_node;
	tree->left->right->right = e_node;
	tree->right->right = i_node;
	tree->right->right->left = h_node;

	btree_apply_prefix(tree, &ft_putstr);	
}

void    ft_putstr(void *str)
{
    int index;
	char *ptr = (char *)str;

	index = 0;
	while (ptr[index] != '\0')
	{
		ft_putchar(ptr[index]);
		index++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
