/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:53:27 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/24 11:02:35 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		i;
	int		str;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	tmp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	str = ft_strlen(s) - 1;
	while (s[str] == ' ' || s[str] == '\n' || s[str] == '\t')
		str--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = 0;
	while (i <= str)
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);
}
