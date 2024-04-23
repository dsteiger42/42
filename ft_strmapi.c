/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:21:28 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 18:21:28 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(ft_strlen(s)) + 1;
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// 26 - f acessa ao idx e ao caracter em 's' no mesmo idx,
// 27 - e copia para o dest

// char	uppercase(unsigned int index, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 	{
// 		return (c - 32);
// 	}
// 	return (c);
// }

// int main()
// {
//     char og[] = "Hello World";
//     char *result = ft_strmapi(og, &uppercase);

//     if (result != NULL)
// 	{
//         printf("String original: %s\n", og);
//         printf("String nova: %s\n", result);
// 	}
//     return (0);
// }