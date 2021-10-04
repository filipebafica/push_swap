/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 20:34:45 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/03 15:45:32 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big(t_node **head_a, t_node **head_b)
{
	int	i;
	int	j;
	int	element_index;
	int	stack_len;

	i = 0;
	while (!is_sorted(head_a))
	{
		stack_len = get_stack_len(head_a);
		j = 0;
		while (j < stack_len)
		{
			element_index = (*head_a)->index;
			if (element_index >> i & 1)
				rotate_stack(head_a, "ra");
			else
				push(head_a, head_b, "pb");
			++j;
		}
		push_until_empty(head_b, head_a, "pa");
		add_stack_index(head_a);
		++i;
	}
}

void	sort_up_to_three(t_node **head_a)
{
	int	stack_len;

	stack_len = get_stack_len(head_a);
	if (stack_len == 2)
	{
		swap(head_a, "sa");
		return ;
	}
	if ((*head_a)->data > (*head_a)->next->next->data)
		rotate_stack(head_a, "ra");
	if ((*head_a)->data > (*head_a)->next->data)
		swap(head_a, "sa");
	if ((*head_a)->next->data > (*head_a)->next->next->data)
	{
		swap(head_a, "sa");
		rotate_stack(head_a, "ra");
	}
}

void	sort_up_to_five(t_node **head_a, t_node **head_b)
{
	int	lowest;

	lowest = get_lowest(head_a);
	while (get_stack_len(head_b) < 2)
	{
		if ((*head_a)->data == lowest)
		{
			push(head_a, head_b, "pb");
			lowest = get_lowest(head_a);
		}
		rotate_stack(head_a, "ra");
	}
	sort_up_to_three(head_a);
	push_until_empty(head_b, head_a, "pa");
}
