/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:14:35 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 13:23:22 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*s;
	char	*new;
	size_t	q;

	q = 0;
	s = malloc(size);
	new = (char *)s;
	if (new)
	{
		while (q < size)
		{
			new[q] = '\0';
			q++;
		}
		return (s);
	}
	return (NULL);
}
