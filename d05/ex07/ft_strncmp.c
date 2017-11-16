/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:34:44 by laustin           #+#    #+#             */
/*   Updated: 2017/10/31 19:19:32 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	unsigned char	s1_result;
	unsigned char	s2_result;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] == s2[index])
	{
		index++;
		if (index == (n - 1))
			break ;
		if (s1[index] == '\0' || s2[index] == '\0')
			break ;
	}
	s1_result = s1[index];
	s2_result = s2[index];
	return (s1_result - s2_result);
}
