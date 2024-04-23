/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:56:05 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 18:13:27 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void upper(void *content)
// {
//     char *c = (char *)content;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main()
// {
// 	t_list *node;

// 	node = ft_lstnew("eheeheh");
// 	if (!node)
// 	{
// 		printf("memory allocation failed, the new node wasn't created!\n");
// 		return (1);
// 	}
// 	printf("New node was created! node before lstiter: %s\n", (char *)node
//		-> content);
// 	ft_lstiter(node, upper);
// 	printf("Node after lstiter: %s\n", (char *)node -> content);
// 	free(node);
// 	return (0);
// }