/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anomourn <anomourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:12:22 by anomourn          #+#    #+#             */
/*   Updated: 2023/10/20 15:12:28 by anomourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*body_itoa(int *neg, int n, int l)
{
	int			i;
	char		*str;
	long int	n2;

	*neg = 0;
	n2 = n;
	i = 0;
	if (n2 < 0)
	{
		*neg = *neg + 1;
		n2 *= -1;
	}
	str = malloc(sizeof(char) * (l + 1 + *neg));
	if (!str)
		return (NULL);
	if (*neg)
		str[0] = '-';
	while (n2)
	{
		str[l - 1 - i + *neg] = n2 % 10 + '0';
		n2 /= 10;
		i++;
	}
	str[l + *neg] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			l;
	int			i;
	int			neg;
	char		*str;

	l = 0;
	if (n == 0)
	{
		str = malloc(sizeof(char) * (2));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = n;
	while (i)
	{
		i /= 10;
		l++;
	}
	str = body_itoa(&neg, n, l);
	if (!str)
		return (NULL);
	return (str);
}

// int main()
// {
// 	int n = -10004;
// 	printf("%s", ft_itoa(n));
// 	return  0;
// }