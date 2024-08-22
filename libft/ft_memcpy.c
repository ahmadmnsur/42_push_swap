/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:34:27 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/11 14:34:28 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num_bytes)
{
	unsigned char			*dest;
	const unsigned char		*src;

	dest = destination;
	src = source;
	while (num_bytes > 0)
	{
		*dest = *src;
		dest++;
		src++;
		num_bytes--;
	}
	return (destination);
}
