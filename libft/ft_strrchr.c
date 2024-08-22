/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:04:02 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/15 12:33:02 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*lst;

	ch = (char) c;
	lst = NULL;
	while (*str)
	{
		if (*str == ch)
		{
			lst = (char *) str;
		}
		str++;
	}
	if (ch == '\0')
		return ((char *) str);
	return (lst);
}
