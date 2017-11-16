/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 10:39:37 by laustin           #+#    #+#             */
/*   Updated: 2017/11/03 14:08:27 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_startsign(int hour);
char	*ft_endsign(int hour);

void	ft_takes_place(int hour)
{
	int		starttime;
	int		endtime;
	char	*startsign;
	char	*endsign;

	startsign = ft_startsign(hour);
	endsign = ft_endsign(hour);
	if (hour > 12)
		starttime = hour - 12;
	else
	{
		if (hour == 0)
			starttime = 12;
		else
			starttime = hour;
	}
	if (starttime == 12 || starttime == 0)
		endtime = 1;
	else
		endtime = starttime + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%i:00 %s AND %i:00 %s", starttime, startsign, endtime, endsign);
}

char	*ft_startsign(int hour)
{
	char *sign;

	if (hour > 12)
	{
		if ((hour - 12) == 12)
			sign = "A.M";
		else
			sign = "P.M";
	}
	else
	{
		if (hour == 12)
			sign = "P.M";
		else
			sign = "A.M";
	}
	return (sign);
}

char	*ft_endsign(int hour)
{
	char *endsign;

	if (hour > 12)
	{
		if ((hour - 12) == 12 || (hour - 12) == 11)
			endsign = "A.M";
		else
			endsign = "P.M";
	}
	else
	{
		if (hour == 12 || hour == 11)
			endsign = "P.M";
		else
			endsign = "A.M";
	}
	return (endsign);
}
