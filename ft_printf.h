/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukmournard <anoukmournard@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:04:34 by anomourn          #+#    #+#             */
/*   Updated: 2023/11/03 16:48:14 by anoukmourna      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

int		ft_printf(const char *string, ...);
int		ft_putcharr(const char character);
int		ft_putnbrr(int nb);
int		ft_putunsi(unsigned int nb);
int		ft_putstrr(char *str);
int		ft_puthexa(unsigned long nb, int upper, int add);

#endif