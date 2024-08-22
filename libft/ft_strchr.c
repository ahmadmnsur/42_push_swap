/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 13:55:15 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/15 12:33:49 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char) c;
	if (ch == '\0')
		return ((char *) str);
	while (*str)
	{
		if (*str == ch)
			return ((char *) str);
		str++;
	}
	return (NULL);
}
