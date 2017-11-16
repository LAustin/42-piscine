/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_board.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:29:50 by laustin           #+#    #+#             */
/*   Updated: 2017/11/15 15:13:56 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_board		*init_board(char *str)
{
	t_board	*board_info;
	char	*title;
	int		title_len;
	int		width;
	int		height;

	board_info = malloc(sizeof(t_board));
	title = get_line(str);
	title_len = ft_strlen(title);
	width = ft_strlen(get_line(&(str[title_len + 1])));
	height = get_height(title);
	board_info->b_width = width;
	board_info->b_height = height;
	board_info->empty_char = title[title_len - 3];
	board_info->full_char = title[title_len - 1];
	board_info->obst_char = title[title_len - 2];
	board_info->str_board = &(str[title_len + 1]);
	return (board_info);
}

int			get_height(char *title)
{
	int		length;
	char	*str_height;

	length = ft_strlen(title);
	str_height = cutstr(title, (length - 3));
	return (ft_atoi(str_height));
}

char		*cutstr(char *str, int n)
{
	char	*cut_str;
	int		i;

	cut_str = (char *)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n)
	{
		if (str[i] == '\0')
			break ;
		cut_str[i] = str[i];
		i++;
	}
	cut_str[i] = '\0';
	return (cut_str);
}

char		*get_line(char *str)
{
	char	*title;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '\n')
			break ;
		count++;
	}
	title = (char *)malloc(sizeof(char) * (count + 1));
	while (i < count)
	{
		title[i] = str[i];
		i++;
	}
	title[i] = '\0';
	return (title);
}
