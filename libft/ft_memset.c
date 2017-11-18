/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 14:44:34 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/28 15:30:44 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	q;
	char	*str;

	q = 0;
	str = (char *)b;
	while (q < len)
	{
		str[q] = (char)c;
		q++;
	}
	return (b);
}
