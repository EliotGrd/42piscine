/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:57:06 by egiraud           #+#    #+#             */
/*   Updated: 2025/02/01 15:57:13 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_other_errors(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) < 2)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	check_if_duplicate(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i + j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	long long int	nb;
	int				baselen;

	i = 0;
	nb = nbr;
	baselen = ft_strlen(base);
	if (check_if_duplicate(base) == 1 || check_other_errors(base) == 1)
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < baselen)
		ft_putchar(base[nbr]);
	if (nb >= baselen)
	{
		ft_putnbr_base(nb / baselen, base);
		ft_putnbr_base(nb % baselen, base);
	}
}
