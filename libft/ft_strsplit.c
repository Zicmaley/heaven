/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:55:21 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/18 13:57:54 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count(const char *str, char c)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	return (word);
}

static	char	*ft_viword(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**s;

	i = 0;
	j = 0;
	if (str)
	{
		wrd = ft_count(str, c);
		if (!(s = (char **)malloc(sizeof(s) * (wrd + 2))))
			return (NULL);
		while (str[i] == c && str[i])
			i++;
		while (j < wrd && str[i])
		{
			s[j] = ft_viword(str, c, &i);
			j++;
		}
		s[j] = NULL;
		return (s);
	}
	return (0);
}
