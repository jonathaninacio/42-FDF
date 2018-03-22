/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 09:43:28 by joinacio          #+#    #+#             */
/*   Updated: 2017/02/20 17:42:16 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				is_line(char *temp, char **line)
{
	char		*n;

	n = NULL;
	ft_strdel(line);
	if ((n = ft_strchr(temp, '\n')))
	{
		*line = ft_strsub(temp, 0, n - temp);
		temp = ft_strcpy(temp, n + 1);
		return (1);
	}
	else
	{
		*line = ft_strdup(temp);
	}
	return (0);
}

int				inf(char *temp, char **line, int ret)
{
	char		*tmp;

	ft_strdel(line);
	if (ret == -1 || !temp || !line)
		return (-1);
	tmp = NULL;
	if (ft_strcmp(temp, "\0") != 0)
	{
		if ((tmp = ft_strchr(temp, '\n')) != NULL)
		{
			*line = ft_strsub(temp, 0, (tmp - temp));
			temp = ft_strcpy(temp, tmp + 1);
			return (1);
		}
		if (tmp == NULL && ft_strcmp(temp, "\0") != 0)
		{
			*line = ft_strsub(temp, 0, ft_strchr(temp, '\0') - temp);
			temp = ft_strcpy(temp, ft_strchr(temp, '\0'));
			return (1);
		}
		if (tmp)
			ft_strdel(&tmp);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char	*temp = NULL;
	char		*swp;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	if (!line || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	*line = ft_strnew(1);
	if (temp && is_line(temp, line))
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		swp = (temp) ? ft_strjoin(temp, buf) : ft_strdup(buf);
		temp ? ft_strdel(&temp) : NULL;
		temp = ft_strdup(swp);
		swp ? ft_strdel(&swp) : NULL;
		if (is_line(temp, line))
			return (1);
	}
	ft_strdel(line);
	if (line && temp)
		*line = ft_strdup(temp);
	return (inf(temp, line, ret));
}
