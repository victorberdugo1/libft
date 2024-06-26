/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 13:14:46 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/26 13:42:20 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	i = 0;
	join = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) - 1);
	if (join == NULL)
		return (NULL);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		join[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	join[i] = 0;
	return (join);
}
