/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:04:18 by laustin           #+#    #+#             */
/*   Updated: 2017/11/11 22:07:50 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		eval_expr(char *str);
int		ft_atoi(char **str);
int		findnum(char **expr);
int		findfactor(char **expr);
int		findsum(char **expr);

#endif
