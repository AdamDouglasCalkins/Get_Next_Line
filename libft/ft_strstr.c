/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:54:21 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/23 10:55:11 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int index1;
	int index2;
	int get_size;

	index1 = 0;
	get_size = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[get_size] != '\0')
		get_size++;
	while (str[index1] != '\0')
	{
		index2 = 0;
		while (to_find[index2] == str[index1 + index2])
		{
			if (index2 == get_size - 1)
			{
				return (str + index1);
			}
			index2++;
		}
		index2 = 0;
		index1++;
	}
	return (0);
}
