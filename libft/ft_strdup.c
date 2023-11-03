/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:41:19 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/12 10:54:58 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*src;
	char	*copy;
	int		i;
	int		l;

	src = (char *)s;
	l = 0;
	while (src[l])
		l++;
	i = 0;
	copy = malloc(sizeof(char) * (l + 1));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i += 1;
	}
	copy[i] = '\0';
	return (copy);
}
