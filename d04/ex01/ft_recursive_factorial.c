/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 13:32:27 by laustin           #+#    #+#             */
/*   Updated: 2017/10/27 16:19:22 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int total;

	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		total = nb * ft_recursive_factorial(nb - 1);
		return (total);
	}
	else
	{
		return (nb);
	}
}
