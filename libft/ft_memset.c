/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:40:54 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/19 11:45:51 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

// int main()
// {
//     char c[10];
//     int val = 'A';
//     size_t n = 10;
//     ft_memset(c, val, n);
//     for (size_t i = 0; i < n; i++)
//     {
//         printf("%c ", c[i]);
//     }
//     printf("\n");
//     return 0;
// }