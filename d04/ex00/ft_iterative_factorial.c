/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 09:49:18 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 16:24:19 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int total;

	if ((nb > 12) || (nb < 0))
	{
		return (0);
	}
	total = nb;
	while (nb > 1)
	{
		total = total * (nb - 1);
		nb--;
	}
	return (total);
}
