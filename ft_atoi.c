/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:40:03 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/05 10:59:51 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	negf;

	i = 0;
	res = 0;
	negf = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			negf = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * negf);
}
/*
#include <stdio.h>
#include <stdlib.h>	

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
	return (0);
}*/
