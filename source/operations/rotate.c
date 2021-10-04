/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:31:14 by fbafica           #+#    #+#             */
/*   Updated: 2021/09/30 17:01:02 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotator(t_node **head)
{
	t_node	*prev;
	t_node	*tail;
	t_node	*tmp;

	get_tail_and_prev(head, &prev, &tail);
	if (prev == NULL || tail == NULL)
		return ;
	tmp = *head;
	*head = tmp->next;
	tmp->next = NULL;
	tail->next = tmp;
}

void	rotate_stack(t_node **head, char *flag)
{
	rotator(head);
	ft_putendl_fd(flag, 1);
}

void	rotate_all(t_node **head_a, t_node **head_b)
{
	rotator(head_a);
	rotator(head_b);
	ft_putendl_fd("rr", 1);
}
