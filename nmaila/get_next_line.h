/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 16:11:27 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/06 07:02:02 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1024
# define FD_SIZE 8

# include "fcntl.h"
# include "unistd.h"
# include "stdlib.h"
# include "libft/libft.h"

int     get_next_line(const int fd, char **line);

#endif
