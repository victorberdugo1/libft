/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:13:54 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/27 10:54:47 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*start;
	char	*end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	while (*start && ft_strchr(set, *start))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, *end))
		end--;
	len = end - start + 1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, start, len + 1);
	return (trim);
}
/*#include <stdio.h>
int main() {
    char const *s1 = "   Hello, world!   ";
    char const *set = " H!";
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed) {
        printf("Cadena original: \"%s\"\n", s1);
        printf("Conjunto a recortar: \"%s\"\n", set);
        printf("Cadena recortada: \"%s\"\n", trimmed);

        free(trimmed); // Liberar la memoria asignada por ft_strtrim
    } else {
        printf("Error: no se pudo recortar la cadena.\n");
    }
    return 0;
}*/
