/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:10:11 by vberdugo          #+#    #+#             */
/*   Updated: 2024/06/21 15:23:48 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*call;
	size_t 			total_size;

	if (nmemb == 0 || size == 0 || size > (size_t)(-1) / nmemb)
		return (NULL);
	total_size = nmemb * size;
	call = (unsigned char *)malloc(total_size);
	if (call == NULL)
        return (NULL);
	ft_bzero(call, nmemb);
    return ((void *)call);
}
