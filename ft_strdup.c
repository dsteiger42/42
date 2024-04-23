/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:25:15 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:52:11 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!dest)
		return (NULL);
	while (str[i])
		dest[j++] = str[i++];
	dest[j] = '\0';
	return (dest);
}
// int main() {
//     const char *original = "Hello, world!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate) {
//         printf("Original string: %s\n", original);
//         printf("Duplicate string: %s\n", duplicate);
//         free(duplicate);
//     }

//     return (0);
// }