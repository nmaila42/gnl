/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:17:46 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/12 14:17:49 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != 0 && n-- > 1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
