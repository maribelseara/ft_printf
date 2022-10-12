/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:51:00 by mseara            #+#    #+#             */
/*   Updated: 2022/10/12 12:41:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"

int	ft_printf(char const *, ...);
int	ft_collect_args(char const *str, va_list args);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int ft_puthex(int num, int len);
#endif
