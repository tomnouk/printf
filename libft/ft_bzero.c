/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:39:36 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/26 15:27:58 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*arr;

	arr = (char *) s;
	i = 0;
	while (i < n)
	{
		arr[i] = '\0';
		i++;
	}
}
// int main()
// {
//     char s[10] = "Hello";
//     size_t n = 5;
//     printf("av : %s\n", s);
//     ft_bzero(s, n);
//     printf("ap : %s\n", s);
//     return 0;
// }