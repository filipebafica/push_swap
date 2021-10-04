/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:08:50 by fbafica           #+#    #+#             */
/*   Updated: 2021/06/19 13:31:49 by fbafica          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*ptr_dest;
	const char		*ptr_src;
	int				is_c;
	size_t			i;

	ptr_dest = dest;
	ptr_src = src;
	is_c = 0;
	i = 0;
	while (i < n)
	{
		++i;
		*ptr_dest = *ptr_src;
		if ((unsigned char)*ptr_src == (unsigned char)c)
		{
			is_c = 1;
			break ;
		}
		++ptr_dest;
		++ptr_src;
	}
	if (is_c == 0)
		return (NULL);
	else
		return (dest + i);
}
