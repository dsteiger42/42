/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:35:13 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 19:41:38 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s1;

	s1 = (char *)str;
	while (*s1)
		s1++;
	while (*s1 >= 0)
	{
		if (*s1 == (char)c)
			return (s1);
		s1--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char c = 'r';
// 	char *str = "hjdshjdhjgrrkrkkkd";
// 	char	*result = ft_strrchr(str, c);

// 	printf("%s", result);
// 	return (0);
// }