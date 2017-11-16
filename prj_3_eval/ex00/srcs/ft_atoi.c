/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:47:22 by laustin           #+#    #+#             */
/*   Updated: 2017/11/11 21:53:19 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char **str)
{
	int nb;
	int negative;

	nb = 0;
	negative = 1;
	while (**str == ' ' || **str == '\t' || **str == '\n' || **str == '\f'
			|| **str == '\v' || **str == '\r')
		(*str)++;
	if (**str == '-')
		negative = -1;
	if ((**str == '-') || (**str == '+'))
		(*str)++;
	while (**str != '\0')
	{
		if (**str >= '0' && **str <= '9')
		{
			nb = (nb * 10) + (**str - '0');
			(*str)++;
		}
		else if (**str == ' ')
			(*str)++;
		else
			break ;
	}
	return (nb * negative);
}
