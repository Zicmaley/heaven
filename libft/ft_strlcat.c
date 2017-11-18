/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:40:05 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/30 17:33:41 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t q;
	size_t i;
	size_t j;

	q = 0;
	i = 0;
	while (dst[q] != '\0')
		q++;
	j = q;
	if (dstsize == 0)
		return (q);
	while (src[i] != '\0' && q < dstsize - 1)
	{
		dst[q] = src[i];
		i++;
		q++;
	}
	dst[q] = '\0';
	while (src[i] != '\0')
		i++;
	if (j > dstsize)
		return (i + dstsize);
	return (i + j);
}
