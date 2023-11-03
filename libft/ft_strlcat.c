/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:41:37 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/17 12:17:59 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	sl = ft_strlen(src);
	if (size == 0)
		return (sl);
	dl = 0;
	while (dst[dl])
		dl += 1;
	i = 0;
	while (src[i] && dl + i < (size - 1))
	{
		dst[i + dl] = src[i];
		i += 1;
	}
	if (i < size)
		dst[dl + i] = '\0';
	if (dl > size)
		return (sl + size);
	return (dl + sl);
}
// int main()
// {
//     char dst[100] = "c'est moi";
//     char src[] = "";
//     printf("%ld", ft_strlcat(dst, src, 15));
//     return 0;
// }
