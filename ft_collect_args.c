/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:18:47 by mseara            #+#    #+#             */
/*   Updated: 2022/10/21 17:45:16 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_collect_args(char const *str, va_list args)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len = ft_putchar(va_arg(args, int));
	if (*str == 's')
		len = ft_putstr(va_arg(args, char *));
	if (*str == 'p')
	{
		len = ft_putstr("0x");
		if (len == -1)
			return (len);
		len = ft_putptr(va_arg(args, unsigned long long), len);
	}
	if (*str == 'd' || *str == 'i')
		len = ft_putnbr(va_arg(args, int), len);
	if (*str == 'u')
		len = ft_putunsign(va_arg(args, unsigned int), len);
	if (*str == '%')
		len = ft_putchar('%');
	if (*str == 'x' || *str == 'X')
		len = ft_puthex(va_arg(args, unsigned int), len, *str);
	return (len);
}
