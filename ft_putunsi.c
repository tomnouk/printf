/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:46:51 by anoukmourna       #+#    #+#             */
/*   Updated: 2023/11/03 16:45:36 by anoukmourna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsi(unsigned int nb)
{
	if (nb < 0)
		return (ft_putcharr('-') + ft_putnbrr(nb * -1));
	else if (nb >= 10)
		return (ft_putnbrr(nb / 10) + ft_putnbrr(nb % 10));
	else
		return (ft_putcharr(nb + '0'));
}