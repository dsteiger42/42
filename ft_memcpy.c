/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:03:53 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:54:27 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*new;
	const unsigned char	*old;
	size_t				i;

	i = 0;
	old = src;
	new = dest;
	while (i < n && (dest || src))
	{
		new[i] = old[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char src[] = "cavalo";
// 	char dest[] = "madeira";

// 	printf("%s\n", ft_memcpy(src, dest, 4));
// 	return (0);
// }