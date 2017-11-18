/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:42:40 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/13 12:55:35 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*msq;
	int		q;

	q = 0;
	if (s && f)
	{
		while (s[q])
			q++;
		if (!(msq = (char *)malloc(sizeof(char) * (q + 1))))
			return (NULL);
		q = 0;
		while (s[q])
		{
			msq[q] = f(q, s[q]);
			q++;
		}
		msq[q] = '\0';
		return (msq);
	}
	return (0);
}
