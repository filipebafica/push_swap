/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:23:16 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/02 16:06:24 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_already_sorted(void)
{
	ft_putendl_fd("numbers are already sorted", 2);
	return (0);
}

int	error_general(void)
{
	ft_putendl_fd("Error", 2);
	return (0);
}
