/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:12:29 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/28 18:43:01 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_c(const char *s, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*s != '\0')
	{
		if (*s == c)
			in_substring = 0;
		else if (!in_substring)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	find_s(const char *s, char c, int *i)
{
	int	start;

	while (s[*i] != '\0' && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] != '\0' && s[*i] != c)
		(*i)++;
	return (start);
}

static void	free_splt(char **splt, int j)
{
	while (j > 0)
	{
		free(splt[j - 1]);
		j--;
	}
	free(splt);
}

char	**ft_split(char const *s, char c)
{
	char	**splt;
	int		i;
	int		j;
	int		start;
	int		len;

	i = 0;
	j = -1;
	splt = (char **)malloc((count_c(s, c) + 1) * sizeof(char *));
	if (splt == NULL || s == NULL)
		return (NULL);
	splt[count_c(s, c)] = NULL;
	while (++j < count_c(s, c))
	{
		start = find_s(s, c, &i);
		len = i - start;
		splt[j] = (char *)malloc((len + 1) * sizeof(char));
		if (splt[j] == NULL)
		{
			free_splt(splt, j);
			return (NULL);
		}
		ft_strlcpy(splt[j], &s[start], len + 1);
	}
	return (splt);
}
/*

#include <stdio.h>

int main(void) {
	char **result;
	char *str = "hola1 hola2 H4";
	char delimiter = ' ';

	result = ft_split(str, delimiter);
	if (result == NULL) {
		printf("Error: ft_split devolvió NULL\n");
		return 1;
	}

	int i = 0;
	while (result[i] != NULL) {
		printf("Cadena %d: %s\n", i, result[i]);
		i++;
	}

	// Liberar memoria
	i = 0;
	while (result[i] != NULL) {
		free(result[i]);
		i++;
	}
	free(result);

	return 0;
}
*/
