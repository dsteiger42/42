/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsteiger <dsteiger@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:14:23 by dsteiger          #+#    #+#             */
/*   Updated: 2024/04/22 17:49:16 by dsteiger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if ((i >= 65) && (i <= 90))
		i += 32;
	return (i);
}
// int	main(void)
// {
// 	printf("%c\n", ft_tolower('A'));
// }
