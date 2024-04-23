/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:19:59 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/23 14:56:40 by dsteiger         ###   ########.fr       */
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

// 	int *myAlloc = (int *)ft_calloc(nb, sizeof(int));
// 	if (myAlloc == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	for (int ctd = 40; ctd < nb; ctd++)
// 	{
// 		printf("%d ", ctd);
// 		if (myAlloc[ctd] != 0)
// 		{
// 			printf("Error: Allocated memory is not initialized to zero.\n");
// 			return (1);
// 		}
// 	}
// 	free(myAlloc);
// 	return (0);
// }