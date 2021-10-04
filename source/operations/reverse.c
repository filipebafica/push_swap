/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:13:20 by fbafica           #+#    #+#             */
/*   Updated: 2021/09/30 16:11:26 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverser(t_node **head)
{
	t_node	*prev;
	t_node	*tail;
	t_node	*tmp;

	get_tail_and_prev(head, &prev, &tail);
	if (prev == NULL || tail == NULL)
		return ;
	tmp = *head;
	*head = tail;
	(*head)->next = tmp;
	prev->next = NULL;
}

void	reverse_stack(t_node **head, char *flag)
{
	reverser(head);
	ft_putendl_fd(flag, 1);
}

void	reverse_all(t_node **head_a, t_node **head_b)
{
	reverser(head_a);
	reverser(head_b);
	ft_putendl_fd("rrr", 1);
}
