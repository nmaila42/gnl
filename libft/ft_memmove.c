/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:06:59 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/12 14:07:04 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			a[len] = b[len];
	return (dst);
}
