/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 04:09:15 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/06 08:03:22 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*read_line(int fd, char **s, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	while (s[fd][i] != '\n' && s[fd][i] != '\0')
		i++;
	if (s[fd][i] == '\n')
	{
		*line = ft_strsub(s[fd], 0, i);
		tmp = ft_strdup(s[fd] + i + 1);
		ft_strdel(&s[fd]);
		free(s[fd]);
		s[fd] = tmp;
		//if (s[fd][0] == '\0')
		//	ft_strdel(&s[fd]);
	}
	else if (s[fd][i] == '\0')
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (*line);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static char		*s[50];
	char			*tmp;

	if (fd < 0 || BUFF_SIZE < 1 || line == NULL)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
		s[fd] = ft_strnew(0);
		tmp = ft_strjoin(s[fd], buf);
		//ft_strdel(&s[fd]);
		free(s[fd]);
		s[fd] = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0 && (s[fd] == NULL || s[fd] == '\0'))
		return (0);
	*line = read_line(fd, s, line);
		return (1);
}
