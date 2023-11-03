/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:10:25 by anomourn          #+#    #+#             */
/*   Updated: 2023/11/03 16:45:04 by anoukmourna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrr(char *str)
{
	int	i;

	if (str == NULL)
		return (ft_putstrr("(null)"));
	i = -1;
	while (str[++i])
		ft_putcharr(str[i]);
	return (i);
}
