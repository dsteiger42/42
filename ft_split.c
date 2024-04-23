/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:14:18 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 18:08:59 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

char	*word_aloc(const char *str, char c)
{
	char	*dest;
	int		word_len;
	int		i;

	i = -1;
	word_len = 0;
	while (str[word_len] && str[word_len] != c)
		word_len++;
	dest = (char *)malloc(word_len + 1);
	if (!dest)
		return (NULL);
	while (++i < word_len)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}

void	*free_str(char **dest, int i)
{
	while (i >= 0)
		free(dest[i--]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;

	i = 0;
	dest = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			dest[i] = word_aloc(s, c);
			if (!dest[i])
				return (free_str(dest, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	dest[i] = '\0';
	return (dest);
}
// int main(void) {

//     const char *str = "cavalo de madeira";
//     char delimiter = ' ';

//     char **result = ft_split(str, delimiter);

//     if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("Substring %d: \"%s\"\n", i + 1, result[i]);
//         }
//     } else
//         printf("Memory allocation failed or input string is empty.\n");
//     free_str(result, count_word(str, delimiter));

//     return (0);
// }