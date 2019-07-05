/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_net_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 09:12:27 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/05 10:02:24 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_newline(char **str, char **line)
{
	int		i;
	char	temp;

	i = 0;
	while (*str[i] != '\n' || *str[i] != '\0')
		i++;
	if (*str[i] == '\0')
	{
		*line = ft_strdup(*str);
		ft_strdel(&str);
	}
	else if (*str[i] == '\n')
	{
		*line = ft_strsub(*str, 0, i);
		temp = ft_strdup(*str[i + 1]);
		free(*str);
		*str = temp;
		if (*str[0] == '\0')
			ft_strdel(&str);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int				bytes;
	char			buff[size + 1];
	char			*temp;
	static char		*str[1024];

	if (fd < 0 || line == NULL || read(fd, NULL, 0) == -1)
		return (-1);
	while ((bytes = read(fd, buff, size)) > 0)
	{
		buff[bytes] == '\0';
		if (str[fd] == NULL)
			ftr[fd] = ft_strdup(buff);
		else
		{
			temp = ft_strjoin(str[fd], buff);
			free(str[fd]);
			str[fd] = temp;
		}
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (bytes < 0)
		return (-1);
	else if (bytes == 0 && str[fd] == NULL || str[0] ='\0')
		return (0);
	else
		return (ft_newline(str, line);
}
