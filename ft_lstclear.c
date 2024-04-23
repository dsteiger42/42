/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:53:48 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:56:19 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

void	del(void *content)
{
	free(content);
}

// int main()
// {
// 	t_list *lst;
// 	t_list *node1 = ft_lstnew("node1");
// 	t_list *node2 =ft_lstnew("node2");
// 	t_list *node3 = ft_lstnew("node3");

// 	lst = node1;

// 	node1 -> next = node2;
// 	node2 -> next = node3;
// 	node3 -> next = NULL;

// 	if (!node1 || !node2 || !node3)
// 	{
// 		printf("Memory allocation failed!");
// 		return (1);
// 	}
// 	while (lst != NULL)
// 	{
// 		printf("The node was created and his content is: %s\n", (char *)lst
// 			-> content);
// 		lst = lst -> next;
// 	}
// 	ft_lstclear(&lst, del);
// 	if (lst == NULL)
// 		printf("list cleared with success!\n");
// 	else
// 	{
// 		printf("list was not cleared correctly!\n");
// 	}
// 	return (0);
// }