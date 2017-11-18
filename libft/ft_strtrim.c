/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:40:22 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/16 11:52:02 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*msq;
	int		sta;
	int		fin;

	if (!s)
		return (NULL);
	sta = 0;
	while (s[sta] < 33)
		sta++;
	if ((fin = ft_strlen(s) - 1) < 0)
		return ("\0");
	while (s[fin] < 33 && fin != 0)
		fin--;
	if (fin == 0)
		return ("\0");
	if (!(msq = (char*)malloc(sizeof(char) * (fin - sta + 1))))
		return (NULL);
	msq = ft_strsub(s, sta, fin - sta + 1);
	msq[fin - sta + 1] = '\0';
	return (msq);
}
