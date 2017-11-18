/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/02 13:35:44 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/02 13:41:00 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t			q;
	unsigned char	*msq;
	unsigned char	*mst;

	q = 0;
	msq = (unsigned char *)s1;
	mst = (unsigned char *)s2;
	while ((msq[q] || mst[q]) && q < n)
	{
		if (msq[q] != mst[q])
			return (msq[q] - mst[q]);
		q++;
	}
	return (0);
}
