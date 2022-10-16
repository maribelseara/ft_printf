/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:18:47 by mseara            #+#    #+#             */
/*   Updated: 2022/10/16 10:21:32 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_collect_args(char const *str, va_list args)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len = ft_putchar(va_arg(args, int));
	if (*str == 's')
		len = ft_putstr(va_arg(args, char *));
	if (*str == 'p')
		len = ft_putstr("0x");
		if (len == -1)
			return (len);
		len = len + ft_puthex(va_arg(args, unsigned long long), len);
	return (len);
}
