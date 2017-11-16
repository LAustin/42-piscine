/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:42:51 by laustin           #+#    #+#             */
/*   Updated: 2017/10/31 13:47:15 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_swap(int *a, int*b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int c;
	int d;
	int *a;
	int *b;

	c = 5;
	d = 10;
	a = &c;
	b = &d;

	ft_putchar('t');
	ft_swap(a, b);
	ft_putstr("hello");
	ft_strlen("hello");
	ft_strcmp("hey", "how");
}
