/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraud <egiraud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:34:21 by egiraud           #+#    #+#             */
/*   Updated: 2025/02/06 16:19:14 by egiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_char_a_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_char_a_sep(str[i], charset) == 1)
			i++;
		while (str[i])
		{
			if (is_char_a_sep(str[i], charset) == 0
				&& is_char_a_sep(str[i + 1], charset) == 1)
				count++;
			i++;
		}
	}
	return (count);
}

char	*splitter(char *str, char *charset, int i)
{
	int		j;
	int		k;
	char	*tab;

	k = 0;
	j = i;
	while (str[j] && is_char_a_sep(str[j], charset) == 0)
		j++;
	tab = malloc(sizeof(char) * (j - i + 1));
	if (!tab)
		return (NULL);
	while (i < j)
	{
		while (str[i] && is_char_a_sep(str[i], charset) == 1)
			i++;
		tab[k] = str[i];
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;
	int		nb_words;

	i = 0;
	j = 0;
	nb_words = count_words(str, charset);
	tab = malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (NULL);
	while (j < nb_words)
	{
		while (str[i] && is_char_a_sep(str[i], charset) == 1)
			i++;
		tab[j] = splitter(str, charset, i);
		i += ft_strlen(tab[j]);
		j++;
		i++;
	}
	tab[nb_words] = 0;
	return (tab);
}
