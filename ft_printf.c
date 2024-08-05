/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocrobin <ocrobin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:32:55 by ocrobin           #+#    #+#             */
/*   Updated: 2024/08/04 12:59:12 by ocrobin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_formats(va_list arg, const char format)
{
	int	result;

	result = 0;
	if (format == 'c')
		result = ft_putchar(va_arg(arg, int));
	if (format == 's')
		result = ft_printstr(va_arg(arg, char *));
	if (format == 'p')
		result = ft_put_ptrhex(va_arg(arg, unsigned long));
	if (format == 'u')
		result = ft_put_unsdec(va_arg(arg, unsigned int));
	if (format == 'x')
		result = ft_print_hex(va_arg(arg, unsigned int), format);
	if (format == 'X')
		result = ft_print_hex(va_arg(arg, unsigned int), format);
	if (format == '%')
		result = ft_percent();
	if (format == 'd' || format == 'i')
		result = ft_print_d(va_arg(arg, int));
	return (result);
}

int	ft_printf(const char *str, ...)
{
	int				i;
	va_list			arg;
	int				printed;

	i = 0;
	printed = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printed += ft_formats(arg, str[i + 1]);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			printed++;
		}
	}
	va_end(arg);
	return (printed);
}
