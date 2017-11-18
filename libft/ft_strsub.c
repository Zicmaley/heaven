/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 12:57:54 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/13 13:39:12 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*msq;
	size_t		i;

	i = 0;
	if (s)
	{
		if (!(msq = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (i < len)
		{
			msq[i] = s[start + i];
			i++;
		}
		msq[i] = '\0';
		return (msq);
	}
	return (NULL);
}
