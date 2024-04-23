/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:41:22 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 18:47:55 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	available_space;

	dest_len = ft_strlen(dest);
	i = 0;
	available_space = size - 1 - dest_len;
	if (size <= dest_len + 1)
		available_space = 0;
	while (i < available_space && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + i);
}
// int	main(void)
// {
// 	char	s1[50] = "cavalo de madeira";
// 	char	s2[25] = "hello";
// 	size_t	result;

// 	result = ft_strlcat(s1, s2, 20);
// 	printf("%d\n", result);
// 	return (0);
// }