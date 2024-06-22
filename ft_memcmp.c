/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:36:48 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/22 16:28:40 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    // Comparar str1 y str2
    if (memcmp(str1, str2, sizeof(str1)) == 0) {
        printf("str1 y str2 son iguales\n");
    } else {
        printf("str1 y str2 son diferentes\n");
    }
    // Comparar str1 y str3
    if (memcmp(str1, str3, sizeof(str1)) == 0) {
        printf("str1 y str3 son iguales\n");
    } else {
        printf("str1 y str3 son diferentes\n");
    }
    return 0;
}*/
