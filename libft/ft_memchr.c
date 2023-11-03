/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:40:09 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/19 11:46:27 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str++ == (unsigned char)c)
			return (--str);
	}
	return (NULL);
}

// int main()
// {
//     const char *str = "ciaouo";
//     int c = 'u';
//     size_t n = 15; 
//     const void *result = ft_memchr(str, c, n);
//     printf("caract : '%c' pos : %zd.\n", c);
//     return 0;
// }