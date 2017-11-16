/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 09:40:41 by laustin           #+#    #+#             */
/*   Updated: 2017/10/31 11:11:23 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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
