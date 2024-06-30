/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 13:55:33 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 18:07:28 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
#include <stdio.h>

int main(void)
{
    char *content = "Hello, world!";
    t_list *node = ft_lstnew(content);

    if (node == NULL)
    {
        printf("Error: No se pudo asignar memoria para el nuevo nodo.\n");
        return (1);
    }
    printf("Contenido del nodo: %s\n", (char *)node->content);
    free(node);
    return (0);
}

