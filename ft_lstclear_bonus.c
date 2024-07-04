/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:54:33 by victor            #+#    #+#             */
/*   Updated: 2024/07/01 12:10:09 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*#include <stdio.h>
void del(void *content)
{
    free(content);
}
int main(void)
{
    t_list *node1 = ft_lstnew(malloc(sizeof(char) * 6));
    t_list *node2 = ft_lstnew(malloc(sizeof(char) * 6));
    t_list *node3 = ft_lstnew(malloc(sizeof(char) * 6));
    snprintf(node1->content, 6, "Node1");
    snprintf(node2->content, 6, "Node2");
    snprintf(node3->content, 6, "Node3");
    node1->next = node2;
    node2->next = node3;
    t_list *list = node1;
    ft_lstclear(&list, del);
    if (list == NULL)
        printf("Lista vacía\n");
    else
        printf("Error: La lista no está vacía\n");

    return 0;
}
*/
