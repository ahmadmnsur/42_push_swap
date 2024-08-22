/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:27:53 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/12 15:28:06 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;
	size_t	total;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	x = 0;
	if (size <= i)
		return (size + j);
	total = i + j;
	while (src[x] != '\0' && i + x < size - 1)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (total);
}
