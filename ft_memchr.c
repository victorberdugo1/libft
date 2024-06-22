/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:26:52 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/22 16:27:51 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*z;
	size_t			con;

	z = (unsigned char *)s;
	con = 0;
	while (con < n)
	{
		if (*z == (unsigned char)c)
			return ((void *)z);
		z++;
		con++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    const char str[] = "Hello, world!";
    const char *ptr = ft_memchr(str, 'w', sizeof(str));

    if (ptr != NULL) {
        printf("Caracter 'w' encontrado en la posición %ld\n", ptr - str);
    } else {
        printf("Caracter 'w' no encontrado\n");
    }

    return 0;
}*/
