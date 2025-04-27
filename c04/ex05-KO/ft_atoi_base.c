/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:05:48 by egiraud           #+#    #+#             */
/*   Updated: 2025/02/01 17:39:12 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_errors(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-'
			|| (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (1);
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

int	check_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	get_atoi_index(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -*sign;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	value;

	result = 0;
	sign = 1;
	i = get_atoi_index(str, &sign);
	if (check_errors(base) == 1)
		return (0);
	while (str[i] != '\0')
	{
		value = check_in_base(str[i], base);
		if (value != -1)
			result = (result * ft_strlen(base)) + value;
		i++;
	}
	return (result * sign);
}
