/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:03:20 by dsteiger          #+#    #+#             */
/*   Updated: 2024/05/10 15:08:21 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
// 17 - sets the "new" pointer of the /
//new node to point at the current 1st node of the list
// 18 - updates the pointer "lst" /
// to point to the new head of the list "new"

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *node1 = ft_lstnew("node1");
// 	t_list *node2 = ft_lstnew("node2");
// 	t_list *node3 = ft_lstnew("node3");

// 	if (!node1 || !node2 || !node3)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return (1);
// 	}
// 	ft_lstadd_front(&lst, node1);
// 	ft_lstadd_front(&lst, node2);
// 	ft_lstadd_front(&lst, node3);

// 	printf("List after adding nodes:\n");
// 	while(lst)
// 	{
// 		printf("%s\n", (char *)lst -> content);
// 		lst = lst ->next;
// 	}
// 	free(lst);
// 	return(0);
// }