/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:16:01 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:50:14 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] && s2[i]) && i < n - 1)
		i++;
	if (i == n || s1[i] == '\0' || s2[i] == '\0')
		return (0);
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("test1", "yest2", 7));
// 	return (0);
// }
