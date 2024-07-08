/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:10:25 by victor            #+#    #+#             */
/*   Updated: 2024/07/08 12:14:06 by vberdugo         ###   ########.fr       */
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

void *duplicate_content(void *content)
{
    char *dup = ft_strdup((char *)content);
    return (void *)dup;
}

void del(void *content)
{
    free(content);
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *node1 = ft_lstnew(ft_strdup("Node1"));
    t_list *node2 = ft_lstnew(ft_strdup("Node2"));
    t_list *node3 = ft_lstnew(ft_strdup("Node3"));

    node1->next = node2;
    node2->next = node3;
 
	t_list *new_list = ft_lstmap(node1, duplicate_content, del);

    ft_lstiter(new_list, print_content);

    ft_lstclear(&node1, del);
    ft_lstclear(&new_list, del);

    return 0;
}
*/
