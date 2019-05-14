/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 11:59:14 by acalkins          #+#    #+#             */
/*   Updated: 2018/04/26 12:08:41 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_lstdel(t_list **link, void (*del)(void*, size_t))
{
	t_list	*next;
	t_list	*curr;

	if (link && del)
	{
		curr = *link;
		while (curr != NULL)
		{
			next = curr->next;
			(*del)(curr->content, curr->content_size);
			free(curr);
			curr = next;
		}
		*link = NULL;
	}
}
