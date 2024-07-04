/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:52:03 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 22:53:46 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
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
    // Añadir un nodo al frente de la lista
    ft_lstadd_front(&list, node2);
    // Añadir un nodo al final de la lista
    ft_lstadd_back(&list, node3);
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
