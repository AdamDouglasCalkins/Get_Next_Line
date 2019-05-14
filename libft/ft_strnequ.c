/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:49:03 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/25 21:15:31 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	num1;

	num1 = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[num1] == s2[num1] && num1 < n && s1[num1] != '\0')
	{
		num1++;
	}
	if (num1 == n)
		return (1);
	else if (s1[num1] == s2[num1])
		return (1);
	else
		return (0);
}
