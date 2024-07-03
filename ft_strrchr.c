/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:24:29 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/03 10:18:11 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (last);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int main ()
{
	char  *str = "voy a repetir tu nombre";
	char car = 'p';

	printf("%s\n",ft_strrchr(str,car));
	printf("%s",strrchr(str,car));
}*/
