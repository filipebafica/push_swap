/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 21:23:35 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/04 13:44:06 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
}	t_stack;

void	create_stack(t_stack *stack);
void	init_stack(t_node **head, int size, char **input);
t_node	*add_node(int data);
void	print_stack(t_node **head);
void	swap(t_node **head, char *flag);
void	push(t_node **head_from, t_node **head_to, char *flag);
void	push_until_empty(t_node **head_from, t_node **head_to, char *flag);
void	reverse_stack(t_node **head, char *flag);
void	reverse_all(t_node **head_a, t_node **head_b);
void	rotate_stack(t_node **head, char *flag);
void	rotate_all(t_node **head_a, t_node **head_b);
int		is_sorted(t_node **head);
int		get_stack_len(t_node **head);
t_node	*get_node(t_node **head, int to_find);
void	get_node_and_prev(t_node **head, t_node **prev, \
t_node **curr, int to_find);
void	get_tail_and_prev(t_node **head, t_node **prev, t_node **tail);
int		get_greatest(t_node **head);
int		get_lowest(t_node **head);
void	add_stack_index(t_node **head);
void	sort_big(t_node **head_a, t_node **head_b);
void	sort_up_to_three(t_node **head_a);
void	sort_up_to_five(t_node **head_a, t_node **head_b);
void	free_stack(t_node **head);
int		input_parser(int size, char **input);
int		error_already_sorted(void);
int		error_general(void);

#endif