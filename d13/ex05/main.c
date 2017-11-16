/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:56:59 by laustin           #+#    #+#             */
/*   Updated: 2017/11/09 21:09:54 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(void *str1, void *str2);
void    ft_putstr(void *str);
void    btree_apply_infix(t_btree *root, void (*applyf)(void *));
t_btree *btree_create_node(void *item);
void    *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *));

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
//	t_btree *empty = 0;

	char *f = "F";
	char *b = "B";
	char *a = "A";
	char *g = "G";
	char *d = "D";
	char *c = "C";
	char *e = "E";
	char *i = "I";
	char *h = "H";
//	char *j = "J";
//	char *k = "K";
//	char *l = "L";

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
//	tree->right->right->left = h_node;

	printf("%s", (char *)btree_search_item(tree, h, &ft_strcmp));
	printf("\n");
	printf("%s", (char *)btree_search_item(tree, b, &ft_strcmp));
	printf("\n");
	printf("%s", (char *)btree_search_item(tree, c, &ft_strcmp));
	printf("\n");
	btree_apply_infix(tree, &ft_putstr);
}

int ft_strcmp(void *str1, void *str2)
{
	int             index;
	unsigned char   s1_result;
	unsigned char   s2_result;
	char *s1 = (char *)str1;
	char *s2 = (char *)str2;

	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' || s2[index] == '\0')
			break ;
	}
	s1_result = s1[index];
	s2_result = s2[index];
	return (s1_result - s2_result);
}

void    ft_putstr(void *str)
{
	int index;
	char *ptr = (char *)str;

	index = 0;
	while (ptr[index] != '\0')
	{
		write(1, &ptr[index], 1);
		index++;
	}
}
