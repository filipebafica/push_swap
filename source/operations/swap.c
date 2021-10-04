/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:38:24 by fbafica           #+#    #+#             */
/*   Updated: 2021/09/30 16:12:18 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swapper(t_node **head, int x, int y)
{
	t_node	*prev_x;
	t_node	*prev_y;
	t_node	*curr_x;
	t_node	*curr_y;
	t_node	*tmp;

	if (x == y)
		return ;
	get_node_and_prev(head, &prev_x, &curr_x, x);
	get_node_and_prev(head, &prev_y, &curr_y, y);
	if (curr_x == NULL || curr_y == NULL)
		return ;
	if (prev_x != NULL)
		prev_x->next = curr_y;
	else
		*head = curr_y;
	if (prev_y != NULL)
		prev_y->next = curr_x;
	else
		*head = curr_x;
	tmp = curr_y->next;
	curr_y->next = curr_x->next;
	curr_x->next = tmp;
}

void	swap(t_node **head, char *flag)
{
	if (!*head || !(*head)->next)
		return ;
	swapper(head, (*head)->data, (*head)->next->data);
	ft_putendl_fd(flag, 1);
}
