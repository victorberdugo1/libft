/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:55:34 by victor            #+#    #+#             */
/*   Updated: 2024/07/01 12:07:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

// Función para imprimir el contenido del nodo (ejemplo)
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

// Función para liberar contenido de un nodo (ejemplo)
void del(void *content)
{
    (void)content;
}

int main(void)
{
    // Crear algunos nodos de la lista
    t_list *node1 = ft_lstnew("Node1");
    t_list *node2 = ft_lstnew("Node2");
    t_list *node3 = ft_lstnew("Node3");

    // Enlazar los nodos
    node1->next = node2;
    node2->next = node3;

    // Iterar sobre la lista y aplicar la función de impresión
    ft_lstiter(node1, print_content);

    // Limpiar la lista
    ft_lstclear(&node1, del);

    return 0;
}
*/
