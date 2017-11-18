/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:24:17 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/01 16:24:19 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *haystack, char *needle)
{
	unsigned int q;

	q = 0;
	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			while (haystack[q] == needle[q] && haystack[q] && needle[q])
				q++;
			if (needle[q] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
