/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:31:37 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/22 16:58:02 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;
	size_t		len;
	size_t		i;

	s = src;
	len = 0;
	i = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*#include <stdio.h>
int main() {
    char src[] = "Hello, World!";
    char dst[20];
    size_t copied;

    copied = ft_strlcpy(dst, src, sizeof(dst));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);
    printf("Length of src: %zu\n", copied);

    return 0;
}*/
