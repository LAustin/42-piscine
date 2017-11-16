/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/03 16:38:23 by laustin           #+#    #+#             */
/*   Updated: 2017/11/03 16:44:01 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <stdio.h>
# include <unistd.h>
# define CLOSE			0
# define OPEN			1
# define EXIT_SUCCESS	0

typedef int		t_ft_bool;

typedef struct	s_door
{
	int state;
}				t_door;

void			ft_putstr(char *str);
void			close_door(t_door *door);
void			open_door(t_door *door);
int				is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door *door);

#endif
