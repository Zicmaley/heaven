/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:36:39 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 12:38:49 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t q;

	q = 0;
	if (s1)
	{
		while (s1[q] || (s2[q] && q < n))
		{
			if (s1[q] != s2[q])
				return (0);
			q++;
		}
	}
	return (1);
}
