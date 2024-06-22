/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:31:10 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/22 16:11:05 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int main() {
	char src[] = "Hello, World!";
	char dest[50];

	printf("Source before memmove: %s\n", src);

	ft_memmove(dest, src, strlen(src) + 1);

	printf("Destination after ft_memmove: %s\n", dest);

	memmove(dest, src, strlen(src) + 1);

	printf("Destination after memmove: %s\n", dest);

	char overlap[] = "Hello, World!";
	printf("Source before overlapping ft_memmove: %s\n", overlap);

	ft_memmove(overlap + 7, overlap, 5);

	printf("Source after overlapping ft_memmove: %s\n", overlap);

	return 0;
}*/
