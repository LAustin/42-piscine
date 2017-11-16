/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 20:45:52 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 21:16:00 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 1 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb < 0)
		nb = nb * -1;
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
