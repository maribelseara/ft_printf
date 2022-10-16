/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:48:04 by mseara            #+#    #+#             */
/*   Updated: 2022/10/16 11:21:08 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int	len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len = len + ft_collect_args(str, args);
		}
		else
		{
			len = len + ft_putchar(*str);
		}
		str++;
	}
	va_end(args);
	return (len);
}
