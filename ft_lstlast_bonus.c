/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:25:25 by victor            #+#    #+#             */
/*   Updated: 2024/07/08 12:08:52 by vberdugo         ###   ########.fr       */
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
    t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");
    
	t_list *list = node1;
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);
    int size = ft_lstsize(list);
    printf("Tamaño de la lista: %d\n", size);
    
	t_list *last = ft_lstlast(list);
    if (last)
        printf("Último nodo de la lista: %s\n", (char *)last->content);
    free(node1);
    free(node2);
    free(node3);
    return 0;
}
*/
