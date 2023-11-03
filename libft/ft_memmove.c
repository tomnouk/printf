/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:40:51 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/12 11:12:21 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sourc;

	dest = (char *)dst;
	sourc = (char *)src;
	if (dst == src)
		return (dst);
	if (sourc < dest)
	{
		while (len--)
			*(dest + len) = *(sourc + len);
		return (dst);
	}
	while (len--)
		*dest++ = *sourc++;
	return (dst);
}
// int main()
// {
//     char s[] = "coucou";
//     char s1[20];
//     size_t len = strlen(s);
//     ft_memmove(s1, s, len);
//     printf("%s", s1);
//     return 0;
// }
