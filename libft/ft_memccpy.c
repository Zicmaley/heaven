/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:01:22 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/28 18:01:38 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	char	*msq;
	char	*tty;
	size_t	q;

	q = 0;
	msq = (char *)dst;
	tty = (char *)src;
	while (q < n)
	{
		*msq = tty[q];
		msq++;
		if (tty[q] == c)
			return (msq);
		q++;
	}
	return (NULL);
}
