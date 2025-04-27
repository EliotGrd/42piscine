/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:29:51 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/16 12:52:59 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		print('0');
		return ;
	}
	if (nb < 0)
	{
		print('-');
		nb = -nb ;
	}
	if (nb < 10)
	{
		print(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		print(nb % 10 + '0');
	}
}
