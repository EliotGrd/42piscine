/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:42:05 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/16 15:54:46 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_putchar(int a, int b, int c)
{
	char	x;
	char	y;
	char	z;

	x = a + '0';
	y = b + '0';
	z = c + '0';
	if (x != y && x != z && y != z)
	{
		ft_putchar(x);
		ft_putchar(y);
		ft_putchar(z);
		if (x != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_int_putchar(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
