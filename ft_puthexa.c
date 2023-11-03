/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:27:20 by anomourn          #+#    #+#             */
/*   Updated: 2023/11/03 16:43:29 by anoukmourna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_puthexa(unsigned long nb, int upper, int add)
{
	char	*dic;

	if (add)
		return (ft_putstrr("0x") + ft_puthexa(nb, 0, 0));
	dic = "0123456789abcdef";
	if (upper)
		dic = "0123456789ABCDEF";
	if (nb < 16)
		return (ft_putcharr(dic[nb]));
	else
		return (ft_puthexa(nb / 16, upper, 0)
			+ ft_puthexa(nb % 16, upper, 0));
}
