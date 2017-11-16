/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:39:56 by laustin           #+#    #+#             */
/*   Updated: 2017/11/06 20:38:37 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length > 1)
	{
		if ((*f)(tab[0], tab[1]) > 0)
			return (0);
		else
			return (ft_is_sort(++tab, length - 1, f));
	}
	return (1);
}
