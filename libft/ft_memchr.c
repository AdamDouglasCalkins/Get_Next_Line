/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 09:59:05 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/24 21:06:30 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	i;

	if (s != NULL && n != 0)
	{
		ptr = (unsigned char*)s;
		i = 0;
		while (i < n)
		{
			if ((unsigned char)c == ptr[i])
				return ((void*)(ptr + i));
			i++;
		}
	}
	return (NULL);
}
