/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 12:07:29 by laustin           #+#    #+#             */
/*   Updated: 2017/11/02 22:08:28 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*makestr(char *str, int *index);
int		wordcount(char *str);

char	**ft_split_whitespaces(char *str)
{
	int		*ptr;
	int		index;
	int		arrlength;
	char	**result;
	int		i;

	index = 0;
	ptr = &index;
	arrlength = wordcount(str);
	result = (char**)malloc(sizeof(char*) * (arrlength + 1));
	i = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
		index++;
	while (i < (arrlength))
	{
		result[i] = makestr(str, ptr);
		i++;
	}
	result[i] = 0;
	return (result);
}

char	*makestr(char *str, int *index)
{
	int		start;
	int		end;
	int		i;
	char	*word;

	start = *index;
	while (str[*index] != ' ' && str[*index] != '\t' && str[*index] != '\n')
	{
		if (str[*index] != '\0')
			*index += 1;
		else
			break ;
	}
	end = *index;
	while (str[*index] == ' ' || str[*index] == '\t' || str[*index] == '\n')
		*index += 1;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (i < (end - start))
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int		wordcount(char *str)
{
	int i;
	int wordcount;
	int newword;

	wordcount = 0;
	newword = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			newword = 1;
		else if (wordcount == 0 && newword == 0)
			wordcount++;
		else if (newword == 1)
		{
			wordcount++;
			newword = 0;
		}
		i++;
	}
	return (wordcount);
}
