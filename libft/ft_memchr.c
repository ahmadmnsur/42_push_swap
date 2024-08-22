/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:31:26 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/15 16:52:01 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	const unsigned char	*p;
	unsigned char		val;
	size_t				i;

	i = 0;
	val = (unsigned char) value;
	p = (const unsigned char *) ptr;
	while (i < num)
	{
		if (p[i] == val)
			return ((void *) p + i);
		i++;
	}
	return (NULL);
}
