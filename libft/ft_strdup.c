/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:45:07 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/15 16:54:24 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen((char *)s) + 1;
	copy = malloc(len);
	if (!copy)
		return (NULL);
	if (copy != NULL)
		ft_strlcpy(copy, (char *)s, len);
	return (copy);
}
