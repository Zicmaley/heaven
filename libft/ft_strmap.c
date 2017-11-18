/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:13:40 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/13 12:37:44 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			msq[q] = f(s[q]);
			q++;
		}
		msq[q] = '\0';
		return (msq);
	}
	return (0);
}
