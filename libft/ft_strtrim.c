/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:21:04 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/12 14:21:07 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(const char *s)
{
	size_t		start;
	size_t		len;
	char		*str;

	start = 0;
	if (!s)
		return (NULL);
	while (((s[start] == ' ') || (s[start] == '\n')
					|| (s[start] == '\t')) && (s[start] != '\0'))
		start++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n')
				|| (s[len - 1] == '\t')) && (s[len - 1] != '\0'))
		len--;
	if (len < start)
		len = start;
	str = ft_strsub(s, start, len - start);
	if (str)
		return (str);
	return (NULL);
}
