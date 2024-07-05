/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:10:11 by vberdugo          #+#    #+#             */
/*   Updated: 2024/07/05 12:32:37 by vberdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*call;
	size_t			total_size;

	if (nmemb == 0 || size == 0 || size > (size_t)(-1) / nmemb)
		return (NULL);
	total_size = nmemb * size;
	call = (unsigned char *)malloc(total_size);
	if (call == NULL)
		return (NULL);
	ft_bzero(call, total_size);
	return ((void *)call);
}
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int num_elements = 8;

    arr = (int *)ft_calloc(num_elements, sizeof(int));
    if (arr == NULL) {
        printf("Error: No se pudo reservar memoria\n");
        return 1;
    }
    printf("Array inicializado:");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}*/
