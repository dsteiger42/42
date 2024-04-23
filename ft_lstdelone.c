/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:14:01 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:55:23 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	else
	{
		del(lst->content);
		free(lst);
	}
}

// void del_content(void *content) {
//     // Free memory allocated to the content
//     free(content);
// }

// int main() {
//     t_list *node = malloc(sizeof(t_list)); // Create a new node
//     node->content = malloc(sizeof(int)); // Allocate memory for content
//     *(int *)(node->content) = 42; // Assign some data to the content
//     node->next = NULL; // Set next pointer to NULL as it's the only node

//     // Delete the content of the node
//     ft_lstdelone(node, del_content);

//     return (0);
// }