/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 19:13:11 by laustin           #+#    #+#             */
/*   Updated: 2017/10/30 20:18:30 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;

	if (*str == '\0' && *to_find == '\0')
		return ("");
	while (*str != '\0')
	{
		index = 0;
		while (to_find[index] == str[index])
			index++;
		if (to_find[index] == '\0')
			return (str);
		str++;
	}
	return (0);
}
