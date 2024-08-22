/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:08:50 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/25 12:14:47 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unbr(unsigned int nb)
{
	char	c;
	int		count;

	count = 0;
	count += recursion(nb / 10);
	c = 48 + nb % 10;
	count += write(1, &c, 1);
	return (count);
}
