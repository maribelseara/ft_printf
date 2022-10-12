/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:35:35 by marvin            #+#    #+#             */
/*   Updated: 2022/10/12 12:35:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_puthex(int num, int len)
{
    if (num > 16)
    {
        ft_puthex(num/16, len);
    }
    if (num % 16 <= 9)
        len = len + ft_putchar(num % 16 + '0');
    else
        len = len + ft_putchar(num % 16 - 10 + 'a');
}