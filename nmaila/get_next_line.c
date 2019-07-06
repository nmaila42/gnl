/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 04:09:15 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/06 11:32:49 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_newline(char **str, char **line, int fd)
{
	char		*temp;
	int			i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		temp = ft_strdup(str[fd] + i + 1);
		free(str[fd]);
		str[fd] = temp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else if (str[fd][i] == '\0')
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (*line);
}

int				get_next_line(const int fd, char **line)
{
	static char	*str[50];
	char		buff[SIZE + 1];
	char		*temp;
	int			bytes;

	if (fd < 0 || line == NULL)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while ((ft_strchr(buff, '\n') == NULL) && (bytes = read(fd, buff, SIZE)) > 0)
	{
		buff[bytes] = '\0';
		temp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = temp;
	//	if (ft_strchr(buff, '\n'))
	//		break ;
	}
	if (bytes < 0)
		return (-1);
	if (bytes == 0 && (str[fd] == NULL || str[fd] == '\0'))
		return (0);
	*line = ft_newline(str, line, fd);
	return (1);
}
