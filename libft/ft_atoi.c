/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 19:32:20 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/24 20:23:40 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int index;
	int num1;
	int charge;

	index = 0;
	num1 = 0;
	charge = 1;
	while ((str[index] == '\n') || (str[index] == ' ') ||
			(str[index] == '\t') || (str[index] == '\v') ||
			(str[index] == '\f') || (str[index] == '\r'))
		index++;
	if (str[index] == '-')
		charge = -1;
	if ((str[index] == '+') || (str[index] == '-'))
		index++;
	while (str[index] && (str[index] >= '0') && (str[index] <= '9'))
	{
		num1 = num1 * 10;
		num1 = num1 + (int)str[index] - '0';
		index++;
	}
	if (charge == -1)
		return (-num1);
	else
		return (num1);
}
