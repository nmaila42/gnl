/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 12:29:29 by nmaila            #+#    #+#             */
/*   Updated: 2019/06/10 11:57:01 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	ltr;

	ltr = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ltr)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == ltr)
		return ((char *)str + i);
	return (NULL);
}
