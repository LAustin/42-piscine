/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 15:06:17 by laustin           #+#    #+#             */
/*   Updated: 2017/10/30 16:14:59 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	int				src_end;

	src_end = 0;
	index = 0;
	while (index < n)
	{
		if (src[index] == '\0')
			src_end = 1;
		if (src_end == 1)
			dest[index] = '\0';
		else
			dest[index] = src[index];
		index++;
	}
	return (dest);
}
