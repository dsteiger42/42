/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:12:27 by dsteiger          #+#    #+#             */
/*   Updated: 2024/05/08 18:46:19 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s1;

	s1 = (char *)str;
	if (c == '\0')
		return (s1 + ft_strlen(s1));
	while (*s1)
	{
		if (*s1 == c)
			return (s1);
		s1++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char c = 'r';
// 	char *str = "hjdshjdhjgrrkkkkd";
// 	printf("%s\n", (char *)strchr(str, c));
// 	printf("%s\n", (char *)ft_strchr(str, c));
// 	return (0);
// }