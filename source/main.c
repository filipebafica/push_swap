/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:21:13 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/04 14:10:37 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (!input_parser((argc), argv))
		return (0);
	create_stack(&stack_a);
	create_stack(&stack_b);
	init_stack(&stack_a.head, (argc - 1), argv);
	if (!is_sorted(&stack_a.head))
	{
		if ((argc - 1) <= 3)
			sort_up_to_three(&stack_a.head);
		else if ((argc - 1) > 3 && (argc - 1) < 6)
			sort_up_to_five(&stack_a.head, &stack_b.head);
		else
			sort_big(&stack_a.head, &stack_b.head);
		ft_putstr_fd("sorted stack: ", 1);
		print_stack(&stack_a.head);
	}
	free_stack(&stack_a.head);
	free_stack(&stack_b.head);
	return (0);
}
