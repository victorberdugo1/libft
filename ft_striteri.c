/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 23:06:10 by victor            #+#    #+#             */
/*   Updated: 2024/06/29 23:23:11 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
void to_uppercase(unsigned int index, char *c)
{
    *c = ft_toupper(*c); // Convierte el carácter a mayúscula
}
int main()
{
    char str[] = "hello";
    ft_striteri(str, &to_uppercase);
    printf("Modificado: %s\n", str);
    return 0;
}*/
