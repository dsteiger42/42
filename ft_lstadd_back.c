/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:50:37 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/23 16:21:37 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}
// 21 - if lst is empty, the pointer will make 'new' the 1st node
// 25 - segue para a frente ate ao ultimo node
// 26 - aponta o ultimo node para "new" node

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *node1 = ft_lstnew("Node1");
// 	t_list *node2 = ft_lstnew("Node2");
// 	t_list *node3 = ft_lstnew("Node3");

// 	if(!node1 || !node2 || !node3)
// 	{
// 		printf("Memory allocation failed!\n");
// 		return(1);
// 	}
// 	ft_lstadd_back(&lst, node1);
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);

// 	printf("List after adding nodes: \n");
//     while (lst != NULL)
//     {
//         printf("%s\n", (char *)lst->content);
//         lst = lst->next;
//     }
// 	free(lst);
// 	return (0);
// }