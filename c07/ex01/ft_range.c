/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:41:36 by egiraud           #+#    #+#             */
/*   Updated: 2025/02/06 11:14:47 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	diff;

	i = 0;
	diff = (max - min);
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * diff);
	if (!tab)
		return (0);
	while (i < diff)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
