/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:49:30 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:49:28 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*dest;

	i = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (start + len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *test;

// 	test = ft_substr("cavalo de madeira", 6, 10);
// 	printf ("%s\n", test);
// 	free(test);
// 	return (0);
// }