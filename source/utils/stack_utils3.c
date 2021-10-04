/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:55:37 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/03 15:59:05 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_relative_lowest(t_node **head, int prev_lowest)
{
	int		lowest;
	t_node	*tmp;

	tmp = *head;
	lowest = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->data == INT_MIN)
			return (INT_MIN);
		if (tmp->data > prev_lowest && tmp->data < lowest)
			lowest = tmp->data;
		tmp = tmp->next;
	}
	return (lowest);
}

void	add_stack_index(t_node **head)
{
	t_node	*node;
	int		stack_len;
	int		lowest;
	int		i;

	lowest = INT_MIN;
	stack_len = get_stack_len(head);
	i = 0;
	while (i < stack_len)
	{
		lowest = get_relative_lowest(head, lowest);
		node = get_node(head, lowest);
		node->index = i;
		++i;
	}
}

int	is_sorted(t_node **head)
{
	int		is_sorted;
	int		next;
	int		curr;
	t_node	*tmp;

	is_sorted = 1;
	tmp = *head;
	while (tmp && tmp->next != NULL)
	{
		curr = tmp->data;
		next = tmp->next->data;
		if (next < curr)
			is_sorted = 0;
		tmp = tmp->next;
	}
	return (is_sorted);
}

int	get_greatest(t_node **head)
{
	t_node	*tmp;
	int		greatest;

	tmp = *head;
	greatest = tmp->data;
	while (tmp)
	{
		if (tmp->data > greatest)
			greatest = tmp->data;
		tmp = tmp->next;
	}
	return (greatest);
}

int	get_lowest(t_node **head)
{
	t_node	*tmp;
	int		lowest;

	tmp = *head;
	lowest = tmp->data;
	while (tmp)
	{
		if (tmp->data < lowest)
			lowest = tmp->data;
		tmp = tmp->next;
	}
	return (lowest);
}
