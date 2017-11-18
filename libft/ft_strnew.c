/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:49:53 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 16:59:29 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ms;
	size_t	q;

	q = 0;
	ms = malloc(size + 1);
	if (ms)
	{
		while (q < size)
		{
			ms[q] = '\0';
			q++;
		}
		ms[q] = '\0';
		return (ms);
	}
	else
		return (NULL);
}
