/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:03:45 by mseara            #+#    #+#             */
/*   Updated: 2022/10/18 16:46:30 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long int num, int len)
{
	if (num < 0)
	{
		len = ft_putchar('-');
		if (len == -1)
			return (-1);
		num = num * (-1);
	}
	if (num >= 10)
	{
		len = ft_putnbr(num / 10, len);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar(num % 10 + '0') == -1)
		return (-1);
	len++;
	return (len);
}

int	ft_putunsign(unsigned long num, int len)
{
	if (num >= 10)
	{
		len = ft_putunsign(num / 10, len);
		if (len == -1)
			return (-1);
	}
	if (ft_putchar(num % 10 + '0') == -1)
		return (-1);
	len++;
	return (len);
}
