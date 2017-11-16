/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:43:19 by laustin           #+#    #+#             */
/*   Updated: 2017/11/12 19:23:51 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int		ft_strcmp(char *s1, char *s2);
char	rush00char(int maxx, int maxy, int x, int y);
char	*rush00str(int maxx, int maxy);
char	rush01char(int maxx, int maxy, int x, int y);
char	*rush01str(int maxx, int maxy);
char	rush02char(int maxx, int maxy, int x, int y);
char	*rush02str(int maxx, int maxy);
char	rush03char(int maxx, int maxy, int x, int y);
char	*rush03str(int maxx, int maxy);
char	rush04char(int maxx, int maxy, int x, int y);
char	*rush04str(int maxx, int maxy);

#endif
