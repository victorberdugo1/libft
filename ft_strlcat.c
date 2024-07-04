/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:43:00 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/04 11:22:00 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;
	size_t	i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = i;
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	if (size <= dst_len)
		return (total_len);
	while (*src && i < size - 1)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (total_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char dst1[8] = "Hello";
    char dst2[8] = "Hello";
    const char *src = " World";
    size_t size = 4;

    size_t result_ft = ft_strlcat(dst1, src, size);
    size_t result_std = strlcat(dst2, src, size);

    printf("Resulting dst from ft_strlcat: '%s'\n", dst1);
    printf("Total length from ft_strlcat: %zu\n", result_ft);

    printf("Resulting dst from strlcat: '%s'\n", dst2);
    printf("Total length from strlcat: %zu\n", result_std);

    return 0;
}*/
