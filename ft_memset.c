/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:40:02 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:54:11 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*mem;
	size_t			counter;

	counter = 0;
	mem = str;
	while (counter < n)
		mem[counter++] = c;
	return (str);
}
// int	main(void)
// {
// 	char src[] = "cavalo";
// 	int	c = 'z';

// 	printf("%s\n", ft_memset(src, c, 4));
// 	return (0);
// }