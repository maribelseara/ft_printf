/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:48:04 by mseara            #+#    #+#             */
/*   Updated: 2022/10/17 14:48:01 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_str_eval(const char *str, int len, int auxlen, va_list args)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			auxlen = ft_collect_args(str, args);
			if (auxlen == -1)
				return (-1);
		}
		else
		{
			auxlen = ft_putchar(*str);
			if (auxlen == -1)
				return (-1);
		}
		len = len + auxlen;
		str++;
	}
	return (len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		len;
	int		auxlen;

	len = 0;
	auxlen = 0;
	va_start(args, str);
	len = ft_str_eval(str, len, auxlen, args);
	if (auxlen == -1)
	{
		va_end(args);
		return (-1);
	}
	va_end(args);
	return (len);
}
