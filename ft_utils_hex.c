/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:02:10 by mseara            #+#    #+#             */
/*   Updated: 2022/10/17 14:02:24 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long num, int len)
{
	if (num > 16)
	{
		len = ft_puthex(num / 16, len);
		if (len == -1)
			return (-1);
	}
	if (num % 16 <= 9)
	{
		if (ft_putchar(num % 16 + '0') == -1)
			return (-1);
		len++;
	}
	else
	{
		if (ft_putchar(num % 16 - 10 + 'a') == -1)
			return (-1);
		len++;
	}
	return (len);
}
