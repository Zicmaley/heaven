/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:02:54 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/28 18:11:58 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*msq;
	char	*tty;
	size_t	q;
	size_t	j;

	j = len - 1;
	q = 0;
	msq = (char *)dst;
	tty = (char *)src;
	while (tty > msq && q < len)
	{
		msq[q] = tty[q];
		q++;
	}
	while (q < len)
	{
		msq[j] = tty[j];
		j--;
		q++;
	}
	return (dst);
}
