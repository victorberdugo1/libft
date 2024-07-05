/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:30:24 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/05 12:24:31 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*z;

	z = (unsigned char *)s;
	while (n > 0)
	{
		*z++ = 0;
		n--;
	}
}

#include <stdio.h>
#include <string.h>
void print_bytes(const char *str, size_t len)
{
    for (size_t i = 0; i < len; i++) {
        printf("%02x ", (unsigned char)str[i]);
    }
    printf("\n");
}

int main()
{
    char cadena[] = "esto se borra";

    printf("Original string: %s\n", cadena);
    print_bytes(cadena, sizeof(cadena));

    ft_bzero(cadena, 8);
    printf("After ft_bzero with n = 8:\n");
    print_bytes(cadena, sizeof(cadena));

    strcpy(cadena, "esto se borra");
    printf("Restored string: %s\n", cadena);
    print_bytes(cadena, sizeof(cadena));

    bzero(cadena, 1);
    printf("After bzero with n = 1:\n");
    print_bytes(cadena, sizeof(cadena));

    strcpy(cadena, "esto se borra");
    ft_bzero(cadena, 5);
    printf("After ft_bzero with n = 5:\n");
    print_bytes(cadena, sizeof(cadena));

    return 0;
}
