/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 14:02:52 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/21 23:31:39 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	void	fill_array(int n, int len, char *array)
{
	int	mod;

	while (len > 0)
	{
		--len;
		mod = n % 10;
		if (n < 0)
			mod *= -1;
		(array)[len] = mod + '0';
		if (!(n / 10 == 0))
			n /= 10;
		else if (n < 0)
			(array)[--len] = '-';
	}
}

static	int	get_len(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		++i;
	while (n / 10 != 0)
	{
		n = n / 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*array;

	len = get_len(n);
	array = ft_calloc(len + 1, 1);
	if (!array)
		return (NULL);
	fill_array(n, len, array);
	if (!array)
		return (NULL);
	return (array);
}
