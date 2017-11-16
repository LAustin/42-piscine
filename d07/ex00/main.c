/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:09:16 by laustin           #+#    #+#             */
/*   Updated: 2017/11/01 18:31:14 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void){
	
	char *str = "hello";
	printf("%s\n", strdup(str));
	printf("%s\n", ft_strdup(str));

	char *str2 = "test";
	printf("%s\n", strdup(str2));
	printf("%s\n", ft_strdup(str2));
}
