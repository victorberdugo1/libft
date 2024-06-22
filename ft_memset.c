/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 10:30:06 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/21 12:00:41 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*st;

	st = (unsigned char *)s;
	while (n > 0)
	{
		*st++ = (unsigned char)c;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char buffer[50];

	ft_memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[49] = '\0';
	printf("Buffer llenado: %s\n", buffer);

	memset(buffer, 'A', sizeof(buffer) - 1);
	buffer[49] = '\0';
	printf("Buffer llenado: %s\n", buffer);

	return 0;
}*/
