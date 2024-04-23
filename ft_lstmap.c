/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:19:19 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 19:31:44 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	new_list = NULL;
	node = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// 27 - ajuda a evitar leaks de memoria, caso a funcao f /
// seja uma funcao que aloque memoria
// 29 - verifica se a memoria foi alocada e,se nao,
// 29 - apaga e liberta o espaco
// 32 - adiciona os novos nodes ao final da lista

// void del(void *content)
// {
// 	free(content);
// }

// static void *upper(void *content)
// {
// 	char *c = (char *)content;
// 	while (*c != '\0')
// 	{
// 		if (*c >= 'a' && *c <= 'z')
// 			*c -= 32; // Subtrai 32 para converter para maiúscula
// 		c++;
// 	}
// 	return (content);
// }

// int main()
// {
// 	t_list *lst = NULL;
// 	t_list *node1 = ft_lstnew("hello world!n");

// 	lst = node1;
// 	if(!node1)
// 	{
// 		printf("Memory allocation failed, the node wasn't created\n");
// 		return (1);
// 	}
// 	printf("The node was created and its content before lstmap is: %s\n",
//		lst->content);
// 	lst = ft_lstmap(lst, &upper, &del); // Remova o & antes de lst
// 	printf("The content of the list after lstmap is: %s\n", lst->content);
		// Adicione uma vírgula aqui
// 	free(lst); // Liberar a lista após seu uso
// 	return (0);
// }