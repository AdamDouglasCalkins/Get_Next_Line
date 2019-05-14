/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:17:26 by acalkins          #+#    #+#             */
/*   Updated: 2018/06/01 17:56:05 by acalkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/includes/libft.h"

static void	ft_buf_free(char **line, char *buf, int ret)
{
	char	*tmp;

	tmp = *line;
	buf[ret] = '\0';
	*line = ft_strjoin(*line, buf);
	free(tmp);
}

static void	ft_str_free(char **line, char **str)
{
	char	*tmp;

	tmp = *line;
	*line = ft_strsub(*line, 0, *str - *line);
	*str = *str + 1;
	*str = ft_strdup(*str);
	free(tmp);
}

int			get_next_line(const int fd, char **line)
{
	static char	*str;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	if (fd <= -1 || (ret = read(fd, buf, 0)) < 0)
		return (-1);
	*line = ft_strnew(1);
	if (str != NULL)
	{
		free(*line);
		*line = ft_strdup(str);
		free(str);
	}
	while (!(str = ft_strchr(*line, '\n')) &&
			(ret = read(fd, buf, BUFF_SIZE)) > 0)
		ft_buf_free(line, buf, ret);
	if (*line[0])
	{
		if (str)
			ft_str_free(line, &str);
		return (1);
	}
	return (0);
}
