/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:14:04 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/26 09:47:31 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int main() {
    const char *str = "Hello, World!";
    int ch = 'W';

    char *result1 = ft_strchr(str, ch);
    if (result1) {
        printf("ft_strchr:'%c' encontrado en: %ld\n", ch, result1 - str);
    } else {
        printf("ft_strchr:'%c' no encontrado\n", ch);
    }

    char *result2 = strchr(str, ch);
    if (result2) {
        printf("strchr:'%c' encontrado en: %ld\n", ch, result2 - str);
    } else {
        printf("strchr:'%c' no encontrado\n", ch);
    }

    return 0;
}*/
