/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:31:54 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/24 20:43:12 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int num1;

	num1 = 0;
	while (s1[num1] == s2[num1] && s1[num1] != '\0' && s2[num1] != '\0')
	{
		num1++;
	}
	return ((unsigned char)s1[num1] - (unsigned char)s2[num1]);
}
