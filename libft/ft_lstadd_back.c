/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:51:19 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/19 16:51:20 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*last;

	if (!new || !head)
		return ;
	if (*head)
	{
		last = ft_lstlast(*head);
		last -> next = new;
	}
	else
		*head = new;
}
