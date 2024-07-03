/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 12:34:36 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/03 09:17:09 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	sub = (char *)malloc((len - start + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[start] != 0 && start < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = 0;
	return (sub);
}
/*#include <stdio.h>
int main(void)
{
    char *result;

    // Test case 1: Normal substring
    char *str1 = "Hello, world!";
    result = ft_substr(str1, 7, 5);
    if (result != NULL)
    {
        printf("Substring: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("Error: Substring returned NULL\n");
    }

    // Test case 2: Empty string
    char *str2 = "";
    result = ft_substr(str2, 0, 5);
    if (result != NULL)
    {
        printf("Empty string: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("Error: Substring returned NULL\n");
    }

    // Test case 3: Null pointer
    char *str3 = NULL;
    result = ft_substr(str3, 0, 5);
    if (result != NULL)
    {
        printf("Null pointer: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("Error: Substring returned NULL\n");
    }

    return 0;
}*/
