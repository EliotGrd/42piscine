/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 22:16:16 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/27 22:28:24 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i])
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
