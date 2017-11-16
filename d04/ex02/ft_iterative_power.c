/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:32:50 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 17:01:25 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int total;

	if (nb < 0)
	{
		nb = nb * -1;
	}
	if (power < 0)
	{
		return (0);
	}
	if (nb == 1 || power == 0)
	{
		return (1);
	}
	if (nb == 0)
	{
		return (0);
	}
	total = nb;
	while (power > 1)
	{
		total = total * nb;
		power--;
	}
	return (total);
}
