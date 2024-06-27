/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:12:29 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/27 16:04:17 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_c(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

static int	find_s(const char *s, char c, int *i)
{
	int	start;

	while (*i >= 0 && s[*i] != c)
		(*i)--;
	start = *i + 1;
	(*i)--;
	return (start);
}

static void	free_splt(char **splt, int j)
{
	while (j > 0)
	{
		free (splt[j - 1]);
		j--;
	}
	free (splt);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**splt;
	int		i;
	int		j;
	int		len;
	int		strt;

	j = count_c(s, c);
	i = ft_strlen(s);
	splt = (char **)malloc((j + 1) * sizeof(char *));
	if (splt == NULL)
		return (NULL);
	while (j--)
	{
		find_s(s, c, &i);
		len = ft_strlen(s);
		splt[j - 1] = (char *)malloc((len + 1) * sizeof(char));
		if (splt[j - 1] == NULL)
			free_splt (splt, count_c(s, c));
		ft_strlcpy (splt[j - 1], s + start, len + 1);
		i--;
	}
	splt[count_c(s, c)] = NULL;
	return (splt);
}
