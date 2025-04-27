/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:20:43 by egiraud           #+#    #+#             */
/*   Updated: 2025/01/30 17:40:56 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		i;

	i = 0;
	newstr = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!newstr)
		return (0);
	while (src[i])
	{
		newstr[i] = src[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/*
#include <stdio.h>
int main()
{
	char *src = "hello World";

	printf("%s", ft_strdup(src));
}
*/
