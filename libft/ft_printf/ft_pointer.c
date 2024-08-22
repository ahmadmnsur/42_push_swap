/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:56:57 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/25 13:00:49 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlong(unsigned long long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += ft_hexlong(n / 16);
	count += write (1, &base[n % 16], 1);
	return (count);
}

int	ft_pointer(void *ptr)
{
	int					count;
	unsigned long long	n;

	n = (unsigned long long)ptr;
	count = 0;
	if (ptr == NULL)
		return (count += ft_putstr("(nil)"));
	count += write (1, "0x", 2);
	count += ft_hexlong(n);
	return (count);
}
