/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:25:25 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 22:39:25 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // Crear algunos nodos
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");
    // Inicializar la lista con el primer nodo
    t_list *list = node1;
    // Añadir nodos al frente de la lista
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);
    // Obtener y mostrar el tamaño de la lista
    int size = ft_lstsize(list);
    printf("Tamaño de la lista: %d\n", size);
    // Obtener y mostrar el último nodo de la lista
    t_list *last = ft_lstlast(list);
    if (last)
        printf("Último nodo de la lista: %s\n", (char *)last->content);
    // Liberar memoria
    free(node1);
    free(node2);
    free(node3);
    return 0;
}
*/
