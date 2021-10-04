/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:42:14 by fbafica           #+#    #+#             */
/*   Updated: 2021/10/03 15:58:45 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_unique(int size, char **input)
{
	int	num_i;
	int	num_j;
	int	freq;
	int	i;
	int	j;

	i = 1;
	while (i < size)
	{
		num_i = ft_atoi(input[i]);
		j = 1;
		freq = 0;
		while (j < size)
		{
			num_j = ft_atoi(input[j]);
			if (num_i == num_j)
				freq += 1;
			if (freq > 1)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	is_valid_int(int size, char **input)
{
	int		i;
	long	num;

	i = 1;
	while (i < size)
	{
		num = ft_atol(input[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		++i;
	}
	return (1);
}

int	is_integer(int size, char **input)
{
	int		i;
	int		j;
	int		flag;
	char	*element;

	i = 1;
	flag = 1;
	while (i < size)
	{
		element = ft_strdup(input[i]);
		j = 0;
		if (element[j] == '-' && ft_isdigit(element[j + 1]))
			++j;
		while (element[j] != '\0')
		{
			if (!ft_isdigit(element[j]))
				flag = 0;
			++j;
		}
		free (element);
		++i;
	}
	return (flag);
}

int	input_parser(int size, char **input)
{
	if (size < 2)
		return (0);
	if (!is_integer(size, input))
	{
		return (error_general());
	}
	if (!is_valid_int(size, input))
	{
		return (error_general());
	}
	if (!is_unique(size, input))
	{
		return (error_general());
	}
	return (1);
}
