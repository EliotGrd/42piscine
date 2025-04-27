/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:31:19 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/29 00:07:49 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb != 1)
	{
		result *= nb - 1;
		nb--;
	}
	return (result);
}
