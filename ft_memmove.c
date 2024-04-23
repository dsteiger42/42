/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:03:09 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 18:30:31 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*new;
	const unsigned char	*temp;

	if (src == dest)
		return (dest);
	new = dest;
	temp = src;
	if (temp > new)
	{
		while (n-- > 0 && (src || dest))
			new[n] = temp[n];
		return (dest);
	}
	else
		ft_memcpy(dest, src, n);
	return (new);
}
// int	main(void)
// {
// 	char src[] = "cavalo";
// 	char dest[] = "madeira";

// 	printf("%s\n", ft_memmove(src, dest, 4));
// 	return (0);
// }