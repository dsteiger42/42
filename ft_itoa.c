/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:59:18 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/23 16:28:46 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb >= 1)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*dest;
	long int	nb;
	int			len;

	nb = n;
	len = length(nb);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb *= -1;
	}
	len--;
	while (nb > 0 && len >= 0)
	{
		dest[len] = 48 + (nb % 10);
		nb /= 10;
		len--;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	*test;

// 	test = ft_itoa(-2147483648);
// 	printf("%s\n", test);
// 	free(test);
// 	return (0);
// }

// 21 - null byte
// 24 - '-'

// criar length da int, para determinar o tamanho da string
// considerar 0 e negativos
// allocar memoria para a string criada pelo int
// converter digitos da int para chars
// meter o '\0'
// retornar pointer para a string alocada