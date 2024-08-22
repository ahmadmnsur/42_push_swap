/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:08:34 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/25 13:27:31 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		count += ft_putchr(str[i]);
		i++;
	}
	return (count);
}
