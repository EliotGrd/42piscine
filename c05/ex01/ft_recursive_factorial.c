/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:57:52 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/29 00:08:21 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	result = nb * (ft_recursive_factorial(nb - 1));
	return (result);
}
