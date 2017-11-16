/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:05:41 by laustin           #+#    #+#             */
/*   Updated: 2017/10/31 16:50:32 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_strswap(char **a, char **b);

int		main(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 1;
			while (i < (argc - 1))
			{
				if (ft_strcmp(argv[i], argv[i + 1]) < 0)
					ft_strswap(&argv[i], &argv[i + 1]);
				i++;
			}
			j++;
		}
		while (i > 0)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}

void	ft_strswap(char **a, char **b)
{
	char *storage;

	storage = *b;
	*b = *a;
	*a = storage;
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int				index;
	unsigned char	s1_result;
	unsigned char	s2_result;

	index = 0;
	while (s1[index] == s2[index])
	{
		index++;
		if (s1[index] == '\0' || s2[index] == '\0')
			break ;
	}
	s1_result = s1[index];
	s2_result = s2[index];
	return (s1_result - s2_result);
}
