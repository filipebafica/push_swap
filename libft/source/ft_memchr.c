/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:45:43 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/10 17:03:21 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*ptr;
	size_t			i;
	int				j;

	ptr = s;
	i = 0;
	j = 0;
	while (i < n)
	{
		if ((unsigned char)ptr[i] == (unsigned char)c)
		{
			++j;
			break ;
		}
		++i;
	}
	if (j == 0)
		return (NULL);
	return ((void *)s + i);
}
