/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:53:34 by victor            #+#    #+#             */
/*   Updated: 2024/07/08 12:05:05 by vberdugo         ###   ########.fr       */
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
void del(void *content)
{
    free(content);
}
int main(void)
{
    t_list *node1 = ft_lstnew(strdup("Nodo 1"));
    t_list *node2 = ft_lstnew(strdup("Nodo 2"));
    t_list *node3 = ft_lstnew(strdup("Nodo 3"));
    
	t_list *list = node1;
    ft_lstadd_front(&list, node2);
    ft_lstadd_back(&list, node3);
    printf("Tamaño de la lista antes de eliminar: %d\n", ft_lstsize(list));
    list = list->next;
    ft_lstdelone(node2, del);
    printf("Tamaño de la lista después de eliminar: %d\n", ft_lstsize(list));
    t_list *last = ft_lstlast(list);
    if (last)
        printf("Último nodo de la lista: %s\n", (char *)last->content);
    ft_lstdelone(node1, del);
    ft_lstdelone(node3, del);
    return 0;
}
*/
