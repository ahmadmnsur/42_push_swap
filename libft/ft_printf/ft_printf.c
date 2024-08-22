/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:56:24 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/25 12:59:37 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_format(const char ch, va_list ap, int count)
{
	if (!ap)
		return (0);
	if (ch == 's')
		count = ft_putstr(va_arg(ap, char *));
	if (ch == 'c')
		count = ft_putchr(va_arg(ap, int));
	if (ch == '%')
		count = ft_putchr('%');
	if (ch == 'd' || ch == 'i')
		count = ft_putnbr(va_arg(ap, int));
	if (ch == 'u')
		count = ft_unbr(va_arg(ap, unsigned int));
	if (ch == 'x' || ch == 'X')
		count = ft_hex(va_arg(ap, unsigned int), ch);
	if (ch == 'p')
		count = ft_pointer(va_arg(ap, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	count;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_check_format(*str, ap, count);
		}
		else
			count += write (1, &(*str), 1);
		str++;
	}
	va_end(ap);
	return (count);
}
