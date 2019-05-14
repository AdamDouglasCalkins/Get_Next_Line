/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 10:51:49 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/26 12:53:00 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **link, void (*del)(void*, size_t))
{
	if (link != NULL && del != NULL)
	{
		del((*link)->content, (*link)->content_size);
		free(*link);
		*link = NULL;
	}
}
