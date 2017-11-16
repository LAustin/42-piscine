/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:14:25 by enennige          #+#    #+#             */
/*   Updated: 2017/11/15 13:48:19 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define BUF_SIZE 100

char	**get_maps(int ac, char **av)
{
	int		i;
	int		fd;
	char	**input_maps;

	input_maps = (char **)(malloc(sizeof(char) * (ac + 1)));
	i = 1;
	if (ac == 1)
	{
		input_maps[0] = read_file(0);
		input_maps[1] = 0;
	}
	else
	{
		while (i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				input_maps[i - 1] = av[i];
			else
				input_maps[i - 1] = read_file(fd);
			i++;
		}
		input_maps[i - 1] = 0;
	}
	return (input_maps);
}

char	*read_file(int fd)
{
	int		i;
	char	*input_str;
	char	*file;

	file = "";
	input_str = (char *)(malloc(sizeof(char) * (BUF_SIZE + 1)));
	while ((i = read(fd, input_str, BUF_SIZE)))
	{
		input_str[i] = '\0';
		file = join_strings(file, input_str);
		free(input_str);
		input_str = (char *)(malloc(sizeof(char) * (BUF_SIZE + 1)));
	}
	return (file);
}

char	*join_strings(char *str_existing, char *str_add)
{
	char	*joined_str;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(str_existing) + ft_strlen(str_add);
	joined_str = malloc(sizeof(char) * (size + 1));
	if (joined_str)
	{
		i = 0;
		while (str_existing[i] != '\0')
		{
			joined_str[i] = str_existing[i];
			i++;
		}
		j = 0;
		while (str_add[j] != '\0')
		{
			joined_str[i] = str_add[j];
			i++;
			j++;
		}
		joined_str[i] = '\0';
	}
	return (joined_str);
}
