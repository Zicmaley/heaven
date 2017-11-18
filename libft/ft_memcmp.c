/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:08:59 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/30 13:28:50 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			q;

	q = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (q < n)
	{
		if (ss1[q] != ss2[q])
			return (ss1[q] - ss2[q]);
		q++;
	}
	return (0);
}
