/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:35:19 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/02 13:26:58 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node **head)
{
	t_node	*tmp;

	if (*head == NULL)
		return ;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free (*head);
		*head = tmp;
	}
}

t_node	*add_node(int data)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->data = data;
	new_node->next = NULL;
	new_node->index = 0;
	return (new_node);
}

void	init_stack(t_node **head, int size, char **input)
{
	t_node	*tmp;

	while (size > 0)
	{
		tmp = add_node(ft_atoi(input[size]));
		if (*head)
			tmp->next = *head;
		*head = tmp;
		--size;
	}
	add_stack_index(head);
}

void	create_stack(t_stack *stack)
{
	stack->head = NULL;
}
