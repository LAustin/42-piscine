/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 14:53:43 by laustin           #+#    #+#             */
/*   Updated: 2017/11/03 16:09:34 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i > k && i < j) || (i < k && i > j))
		return (i);
	else if ((j > i && j < k) || (j < i && j > k))
		return (j);
	else if ((k > i && k < j) || (k < i && k > j))
		return (k);
	return (0);
}
