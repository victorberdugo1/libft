/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:18:49 by victor            #+#    #+#             */
/*   Updated: 2024/06/30 22:05:16 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // Crear algunos nodos
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    // Inicializar la lista con el primer nodo
    t_list *list = node1;
    // Añadir el segundo nodo al frente de la lista
    ft_lstadd_front(&list, node2);
    // Verificar el contenido de la lista
    t_list *current = list;
    while (current)
    {
        printf("Contenido del nodo: %s\n", (char *)current->content);
        current = current->next;
    }
    // Liberar memoria
    free(node1);
    free(node2);

    return 0;
}
*/
