/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:12:02 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/03 10:49:10 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s) + 1;
	dup = (char *)malloc(len);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, len);
	return (dup);
}
/*#include <stdio.h>
#include <string.h>
int main() {
const char *original = "Hello, World!";
    char *duplicate_ft;
    char *duplicate_std;

    // Duplicar la cadena usando ft_strdup
    duplicate_ft = ft_strdup(original);

    if (duplicate_ft) {
        printf("Original: %s\n", original);
        printf("Duplicate (ft_strdup): %s\n", duplicate_ft);
        free(duplicate_ft); // Liberar la memoria asignada
    } else {
        printf("Memory allocation failed for ft_strdup.\n");
    }

    // Duplicar la cadena usando strdup estándar
    duplicate_std = strdup(original);

    if (duplicate_std) {
        printf("Duplicate (strdup): %s\n", duplicate_std);
        free(duplicate_std); // Liberar la memoria asignada
    } else {
        printf("Memory allocation failed for strdup.\n");
    }

    return 0;
}*/
