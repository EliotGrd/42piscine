/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:33:56 by egiraud           #+#    #+#             */
/*   Updated: 2025/02/06 11:37:30 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	get_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	seplen;
	int	lentotal;

	i = 0;
	lentotal = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		lentotal += ft_strlen(strs[i]);
		lentotal += seplen;
		i++;
	}
	lentotal -= seplen;
	return (lentotal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		lentotal;
	char	*dest;

	i = 0;
	if (size < 1)
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	lentotal = get_total_length(size, strs, sep);
	dest = malloc(sizeof(char) * (lentotal + 1));
	if (!dest)
		return (0);
	dest[0] = '\0';
	while (i < size - 1)
	{
		dest = ft_strcat(dest, strs[i]);
		dest = ft_strcat(dest, sep);
		i++;
	}
	dest = ft_strcat(dest, strs[i]);
	dest[lentotal] = '\0';
	return (dest);
}
