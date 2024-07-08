/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:55:34 by victor            #+#    #+#             */
/*   Updated: 2024/07/08 12:06:00 by vberdugo         ###   ########.fr       */
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

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

void del(void *content)
{
    (void)content;
}

int main(void)
{
    t_list *node1 = ft_lstnew("Node1");
    t_list *node2 = ft_lstnew("Node2");
    t_list *node3 = ft_lstnew("Node3");

    node1->next = node2;
    node2->next = node3;

    ft_lstiter(node1, print_content);

    ft_lstclear(&node1, del);

    return 0;
}
*/
