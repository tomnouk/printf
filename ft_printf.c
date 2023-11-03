/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:05:13 by anomourn          #+#    #+#             */
/*   Updated: 2023/11/03 16:47:54 by anoukmourna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_percent(va_list param, const char character)
{
	if (character == 's')
		return (ft_putstrr(va_arg(param, char *)));
	else if (character == 'c')
		return (ft_putcharr(va_arg(param, int)));
	else if (character == 'd' || character == 'i')
		return (ft_putnbrr(va_arg(param, int)));
	else if (character == '%')
		return (ft_putcharr('%'));
	else if (character == 'x')
		return (ft_puthexa(va_arg(param, unsigned int), 0, 0));
	else if (character == 'X')
		return (ft_puthexa(va_arg(param, unsigned int), 1, 0));
	else if (character == 'p')
		return (ft_puthexa(va_arg(param, unsigned long), 0, 1));
	else if (character == 'u')
		return (ft_putunsi(va_arg(param, unsigned int)));
	else
		return (0);
}

int	ft_printf(const char *string, ...)
{
	va_list	param;
	int		i;
	int		size;

	va_start(param, string);
	i = 0;
	size = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			size += ft_percent(param, string[i]);
		}
		else
			size += ft_putcharr(string[i]);
		i++;
	}
	return (size);
}

#include <stdio.h>

int main ()
{
	int res = ft_printf("%s\n", "cacca");
	int res2 = printf("%s\n", "cacca");

	printf("\nres %d\nres2 %d\n", res, res2);
}