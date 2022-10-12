/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:12:07 by mseara            #+#    #+#             */
/*   Updated: 2022/10/08 15:03:13 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len = len + ft_putchar(*str);
		str++;
	}
	return (len);
}
