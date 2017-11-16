/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:40:29 by laustin           #+#    #+#             */
/*   Updated: 2017/10/31 14:51:28 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	index = 0;
	if (argc > 0)
	{
		while (argv[0][index] != '\0')
		{
			ft_putchar(argv[0][index]);
			index++;
		}
		ft_putchar('\n');
	}
	return (0);
}
