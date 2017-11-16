/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:19:10 by enennige          #+#    #+#             */
/*   Updated: 2017/11/15 18:16:47 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		title_length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			break ;
		i++;
	}
	if (i >= 4)
		return (i);
	else
		return (0);
}

int		first_line_length(char *str)
{
	int j;
	int start;
	int str_len;

	str_len = ft_strlen(str);
	start = (title_length(str) + 1);
	if (str_len <= start)
		return (0);
	j = 0;
	while (str[start] != '\n')
	{
		start++;
		j++;
	}
	return (j);
}

int		count_lines(char *str)
{
	int i;
	int lines;
	int title;

	title = get_height(get_line(str));
	if (title == 0)
		return (0);
	i = 0;
	lines = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			lines++;
		i++;
	}
	if (title != lines - 1)
		return (0);
	return (1);
}

int		check_board_shape(char *str, int i, int title_len,
		int first_line_len)
{
	int		obst_count;
	int		char_count;

	obst_count = 0;
	char_count = 0;
	while (str[++i] != '\0')
	{
		if ((str[i] != str[title_len - 3]) && (str[i] != str[title_len - 2])
				&& (str[i] != '\n'))
			return (0);
		if (str[i] == str[title_len - 2])
			obst_count++;
		if (str[i] == str[title_len - 3] || str[i] == str[title_len - 2])
			char_count++;
		if ((i + 1) % (first_line_len + 1) == (title_len + 1))
		{
			if (str[i] != '\n')
				return (0);
		}
	}
	if (obst_count == char_count)
		return (0);
	return (1);
}

int		input_is_valid(char *str)
{
	int first_line_len;
	int i;

	if ((!str) || str[0] == '\0')
	{
		return (0);
	}
	if (title_length(str) == 0)
		return (0);
	first_line_len = first_line_length(str);
	if (first_line_len < 1)
	{
		return (0);
	}
	i = (title_length(str));
	if (count_lines(str) == 0)
	{
		return (0);
	}
	if ((check_board_shape(str, i, title_length(str), first_line_len)) == 0)
	{
		return (0);
	}
	return (1);
}
