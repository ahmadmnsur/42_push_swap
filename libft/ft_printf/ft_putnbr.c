/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:57:59 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/25 13:01:02 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	recursion(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == 0)
		return (0);
	count += recursion(n / 10);
	c = 48 + n % 10;
	count += write(1, &c, 1);
	return (count);
}

int	ft_putnbr(int nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb == -2147483648)
		return (write (1, "-2147483648", 11));
	if (nb < 0)
	{
		count += write(1, "-", 1);
		count += recursion(-(nb / 10));
		c = 48 - nb % 10;
	}
	else
	{
		count += recursion(nb / 10);
		c = 48 + nb % 10;
	}
	count += write(1, &c, 1);
	return (count);
}
