/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:54:54 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/30 15:05:39 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t q;

	q = 0;
	while (src[q] != '\0' && q < len)
	{
		dst[q] = src[q];
		q++;
	}
	while (q < len)
	{
		dst[q] = '\0';
		q++;
	}
	return (dst);
}
