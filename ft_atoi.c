/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 11:40:03 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/19 17:16:31 by vberdugo         ###   ########.fr       */
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
	while ((nptr[i] >= 7 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] <= 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			negf = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]) || nptr[i] != 0)
	{
		res = (res + ((nptr[i]) - 48)) * 10;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>	

int main (int argc, char *argv[])
{

argc[] =

}
*/
