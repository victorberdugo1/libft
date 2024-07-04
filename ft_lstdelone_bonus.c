/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:53:34 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 23:07:51 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*#include <stdio.h>
#include <string.h>
// Función de eliminación de contenido
void del(void *content)
{
    free(content);
}
int main(void)
{
    // Crear algunos nodos
    t_list *node1 = ft_lstnew(strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(strdup("Nodo 3"));
    // Inicializar la lista con el primer nodo
    t_list *list = node1;
    // Añadir nodos a la lista
    ft_lstadd_front(&list, node2);
    ft_lstadd_back(&list, node3);
    // Mostrar el tamaño de la lista antes de eliminar
    printf("Tamaño de la lista antes de eliminar: %d\n", ft_lstsize(list));
    // Eliminar el primer nodo (node2)
    list = list->next; // Actualizar la referencia de la cabeza de la lista
    ft_lstdelone(node2, del);
    // Mostrar el tamaño de la lista después de eliminar
    printf("Tamaño de la lista después de eliminar: %d\n", ft_lstsize(list));
    // Obtener y mostrar el último nodo de la lista
    t_list *last = ft_lstlast(list);
    if (last)
        printf("Último nodo de la lista: %s\n", (char *)last->content);
    // Liberar los nodos restantes
    ft_lstdelone(node1, del);
    ft_lstdelone(node3, del);
    return 0;
}
*/
