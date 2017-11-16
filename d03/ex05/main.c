/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 16:28:35 by laustin           #+#    #+#             */
/*   Updated: 2017/10/26 16:58:05 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	char *str = "Hi there, I am a string!";

	ft_putstr(str);
}
