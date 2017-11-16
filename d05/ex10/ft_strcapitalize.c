/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 20:00:04 by laustin           #+#    #+#             */
/*   Updated: 2017/10/31 21:19:26 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int firstletter;

	firstletter = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && firstletter == 1)
		{
			str[i] -= 32;
			firstletter = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9' && firstletter == 1)
			firstletter = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z' && firstletter == 1)
			firstletter = 0;
		else if (str[i] >= 'A' && str[i] <= 'Z' && firstletter == 0)
			str[i] += 32;
		else if (!((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= '0' && str[i] <= '9')))
			firstletter = 1;
		i++;
	}
	return (str);
}
