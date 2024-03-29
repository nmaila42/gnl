/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaila <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 14:09:15 by nmaila            #+#    #+#             */
/*   Updated: 2019/07/12 14:09:18 by nmaila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	ln;

	ln = (long)n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln *= -1;
	}
	if (ln >= 10)
	{
		ft_putnbr(ln / 10);
		ft_putchar((ln % 10) + '0');
	}
	else
		ft_putchar(ln + '0');
}
