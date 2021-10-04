/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:47:47 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/02 11:29:36 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_len(t_node **head)
{
	t_node	*tmp;
	int		i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		++i;
	}
	return (i);
}

t_node	*get_node(t_node **head, int to_find)
{
	t_node	*node;

	node = *head;
	while (node && node->data != to_find)
	{
		node = node->next;
	}
	return (node);
}

void	get_node_and_prev(t_node **head, t_node **prev, \
t_node **curr, int to_find)
{
	*prev = NULL;
	*curr = *head;
	while (*curr && (*curr)->data != to_find)
	{
		*prev = *curr;
		*curr = (*curr)->next;
	}
}

void	get_tail_and_prev(t_node **head, t_node **prev, t_node **tail)
{
	*prev = NULL;
	*tail = *head;
	while (*tail && (*tail)->next != NULL)
	{
		*prev = *tail;
		*tail = (*tail)->next;
	}
}

void	print_stack(t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		ft_putnbr_fd(tmp->data, 1);
		tmp = tmp->next;
	}
	ft_putchar_fd('\n', 1);
}
