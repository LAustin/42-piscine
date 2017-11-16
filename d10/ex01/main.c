/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:46:49 by laustin           #+#    #+#             */
/*   Updated: 2017/11/06 16:38:21 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb); 

int main(void)
{
	int nums[] = {0, 1, 2, 3, 4};
	int length = 5;
	void (*f)(int);
	f = &ft_putnbr;
	ft_foreach(nums, length, f);
}
