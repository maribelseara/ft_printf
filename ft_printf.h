/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseara <mseara@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:51:00 by mseara            #+#    #+#             */
/*   Updated: 2022/10/18 16:58:04 by mseara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
//borrar siguiente linea
# include <stdio.h>
//borrar siguiente linea
# include <limits.h>
# include "./libft/libft.h"

int	ft_printf(char const *str, ...);
int	ft_collect_args(char const *str, va_list args);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned long long num, int len);
int	ft_putnbr(long long int num, int len);
int	ft_putunsign(unsigned long num, int len);

#endif
