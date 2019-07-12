/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:12:00 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/12 14:12:03 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[i] && (unsigned char)s2[i] &&
		((unsigned char)s1[i] == (unsigned char)s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
