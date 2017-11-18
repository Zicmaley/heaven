/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:53:10 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 18:03:18 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		len;
	char	*msq;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if (!(msq = (char *)malloc(sizeof(msq) * (len + 1))))
			return (NULL);
		ft_strcpy(msq, s1);
		ft_strcat(msq, s2);
		return (msq);
	}
	return (0);
}
