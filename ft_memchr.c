/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:02:16 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:54:39 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s1;
	size_t	i;

	i = 0;
	s1 = (char *)str;
	while (i < n)
	{
		if (s1[i] == c)
			return (s1 + i);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char c[20] = "cazakhistan";

// 	printf ("%s\n", ft_memchr(c, 'h', 8));
// 	return (0);
// }