/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:10:25 by victor            #+#    #+#             */
/*   Updated: 2024/07/01 12:11:21 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*temp;

	new_list = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!new_list)
			new_list = temp;
		else
			new_node->next = temp;
		new_node = temp;
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

// Función para duplicar una cadena (ejemplo de la función a aplicar)
void *duplicate_content(void *content)
{
    char *dup = ft_strdup((char *)content);
    return (void *)dup;
}

// Función para liberar el contenido de un nodo
void del(void *content)
{
    free(content);
}

// Función para imprimir el contenido del nodo (ejemplo)
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    // Crear algunos nodos de la lista original
    t_list *node1 = ft_lstnew(ft_strdup("Node1"));
    t_list *node2 = ft_lstnew(ft_strdup("Node2"));
    t_list *node3 = ft_lstnew(ft_strdup("Node3"));

    // Enlazar los nodos
    node1->next = node2;
    node2->next = node3;

    // Mapear la lista original a una nueva lista
    t_list *new_list = ft_lstmap(node1, duplicate_content, del);

    // Iterar sobre la nueva lista y aplicar la función de impresión
    ft_lstiter(new_list, print_content);

    // Limpiar ambas listas
    ft_lstclear(&node1, del);
    ft_lstclear(&new_list, del);

    return 0;
}
*/
