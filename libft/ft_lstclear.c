/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmmanso <ahmmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:51:25 by ahmmanso          #+#    #+#             */
/*   Updated: 2024/06/19 16:51:26 by ahmmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **head, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!head || !del)
		return ;
	current = *head;
	while (current)
	{
		next = current -> next;
		ft_lstdelone(current, del);
		current = next;
	}
	*head = NULL;
}
