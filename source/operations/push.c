/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 21:37:13 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/03 15:49:57 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pusher(t_node **head_from, t_node **head_to)
{
	t_node	*new_node;
	t_node	*tmp;

	new_node = add_node((*head_from)->data);
	if (*head_to == NULL)
		(*head_to) = new_node;
	else
	{
		tmp = *head_to;
		*head_to = new_node;
		(*head_to)->next = tmp;
	}
	tmp = (*head_from)->next;
	free (*head_from);
	*head_from = tmp;
}

void	push(t_node **head_from, t_node **head_to, char *flag)
{
	if (*head_from == NULL)
		return ;
	pusher(head_from, head_to);
	ft_putendl_fd(flag, 1);
}

void	push_until_empty(t_node **head_from, t_node **head_to, char *flag)
{
	while (*head_from)
		push(head_from, head_to, flag);
}
