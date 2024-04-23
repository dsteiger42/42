/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:12:27 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:52:17 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
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