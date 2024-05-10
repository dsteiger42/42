/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:02:16 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/29 14:58:01 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION :
	The function ft_memchr searches n bytes of the memory area pointed to
	by s for the first occurence of c. Both c and the bytes of s are
	interpreted as unsigned char.

	RETURN VALUE:
	A pointer to the matching byte. NULL if the character does not occur
	in the given memory area.
*/

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
// 	char string[20] = "cazakhistan";

// 	printf ("%s\n", ft_memchr(string, 'h', 8));
// 	return (0);
// }