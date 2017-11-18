/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 17:07:51 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/17 16:08:51 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*msq;
	char	*tty;
	size_t	q;

	q = 0;
	msq = (char *)dst;
	tty = (char *)src;
	while (q < n)
	{
		msq[q] = tty[q];
		q++;
	}
	return (dst);
}
