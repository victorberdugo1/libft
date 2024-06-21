/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:30:24 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/21 14:21:49 by vberdugo         ###   ########.fr       */
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

int main()
{
    char cadena[] = "esto se borra";
    ft_bzero(cadena, 8);
    printf("%s\n", cadena);

    strcpy(cadena, "esto se borra");
    bzero(cadena, 1);
    printf("%s\n", cadena);

    return 0;
}

