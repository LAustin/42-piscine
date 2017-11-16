/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:07:20 by laustin           #+#    #+#             */
/*   Updated: 2017/11/08 19:25:14 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#define BUF_SIZE 10
#include <unistd.h>
#include <errno.h>

int		main(int argc, char **argv)
{
	int	fd;
	int i;

	if (argc < 2)
	{
		fd = 0;
		displayfile(fd, 0);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (errno > 0)
		{
			throwerror(argv[i]);
			errno = 0;
		}
		else
			displayfile(fd, argv[i]);
		i++;
	}
	return (0);
}

void	throwerror(char *fname)
{
	ft_putstr("cat: ");
	ft_putstr(fname);
	if (errno == ENOENT)
		ft_putstr(": No such file or directory\n");
	else if (errno == EISDIR)
		ft_putstr(": Is a directory\n");
	else if (errno == EACCES)
		ft_putstr(": Permission denied\n");
}

int		displayfile(int fd, char *fname)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (errno > 0)
		{
			throwerror(fname);
			errno = 0;
			return (0);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
