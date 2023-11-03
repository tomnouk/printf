/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:06:26 by anomourn          #+#    #+#             */
/*   Updated: 2023/11/03 16:44:16 by anoukmourna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrr(int nb)
{
	if (nb == -2147483648)
		return (ft_putnbrr(-21474) + ft_putnbrr(83648));
	if (nb < 0)
		return (ft_putcharr('-') + ft_putnbrr(nb * -1));
	else if (nb >= 10)
		return (ft_putnbrr(nb / 10) + ft_putnbrr(nb % 10));
	else
		return (ft_putcharr(nb + '0'));
}
