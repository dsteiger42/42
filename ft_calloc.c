/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:19:59 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/30 17:46:36 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nb, size_t size)
{
	void	*dest;

	dest = malloc(nb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nb * size);
	return (dest);
}
// int	main(void)
// {
// 	int nb = 50;
// 	int i = 40;

// 	int *myAlloc = (int *)ft_calloc(nb, sizeof(int));
// 	if (myAlloc == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	while (i < nb)
// 	{
// 		printf("%d ", i);
// 		if (myAlloc[i] != 0)
// 		{
// 			printf("Error: Allocated memory is not initialized to zero.\n");
// 			return (1);
// 		}
// 		i++;
// 	}
// 	free(myAlloc);
// 	return (0);
// }