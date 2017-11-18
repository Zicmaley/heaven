/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:21:37 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/02 13:37:02 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	size_t			q;
	unsigned char	*msq;
	unsigned char	*mst;

	q = 0;
	msq = (unsigned char *)s1;
	mst = (unsigned char *)s2;
	while (msq[q] || mst[q])
	{
		if (msq[q] != mst[q])
			return (msq[q] - mst[q]);
		q++;
	}
	return (0);
}
