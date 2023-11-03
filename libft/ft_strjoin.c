/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:41:27 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/17 18:33:22 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	char		*new;

	new = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		new[i + ft_strlen(s1)] = s2[i];
		i++;
	}
	new[i + ft_strlen(s1)] = '\0';
	return (new);
}

// int main()
// {
//     char const *strs = "Hello";
//     char const *sep = " ciao";

// 	printf("%s\n", ft_strjoin(strs, sep));

//     return 0;
// }
