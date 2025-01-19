/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:23:23 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/18 21:49:13 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0 ;
	while (i < size)
	{
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	tab[10] = {2, 5, 8, 9, 3, 4};
	ft_sort_int_tab(tab, 6);
	printf("%d, %d, %d, %d, %d, %d\n", tab[0], ...., tab[4], tab[5]);
}
*/
