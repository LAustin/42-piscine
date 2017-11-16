/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:59:04 by laustin           #+#    #+#             */
/*   Updated: 2017/11/11 21:56:41 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval.h"

int	findnum(char **expr)
{
	int nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = findsum(expr);
		if (*(*expr) == ')')
			(*expr)++;
	}
	else
	{
		nbr = ft_atoi(expr);
	}
	return (nbr);
}

int	findfactor(char **expr)
{
	int		nbr;
	int		nbr2;
	char	sign;

	nbr = findnum(expr);
	while (**expr != '\0')
	{
		while (**expr == ' ')
			(*expr)++;
		sign = **expr;
		if (sign != '/' && sign != '*' && sign != '%')
			return (nbr);
		(*expr)++;
		nbr2 = findnum(expr);
		if (sign == '/')
			nbr = nbr / nbr2;
		else if (sign == '*')
			nbr = nbr * nbr2;
		else if (sign == '%')
			nbr = nbr % nbr2;
	}
	return (nbr);
}

int	findsum(char **expr)
{
	int		nbr;
	int		nbr2;
	char	sign;

	nbr = findfactor(expr);
	while (**expr != '\0')
	{
		while (**expr == ' ')
			(*expr)++;
		sign = **expr;
		if (sign != '+' && sign != '-')
			return (nbr);
		(*expr)++;
		nbr2 = findfactor(expr);
		if (sign == '+')
			nbr = nbr + nbr2;
		else if (sign == '-')
			nbr = nbr - nbr2;
	}
	return (nbr);
}

int	eval_expr(char *expr)
{
	return (findsum(&expr));
}
