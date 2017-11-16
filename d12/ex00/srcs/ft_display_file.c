/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:55:15 by laustin           #+#    #+#             */
/*   Updated: 2017/11/08 15:24:08 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft.h"
#define BUF_SIZE 4096
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (displayfile(fd))
			return (1);
	}
	return (0);
}

int	displayfile(int fd)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
