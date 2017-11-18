/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:08:56 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/30 12:50:59 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	q;
	char	*st;

	q = 0;
	st = (char *)s;
	while (q < n && st[q] != '\0')
	{
		if (st[q] == c)
			return (&st[q]);
		else if (st[q + 1] == c)
			return (&st[q + 1]);
		q++;
	}
	return (NULL);
}
