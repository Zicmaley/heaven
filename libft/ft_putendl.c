/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:54:43 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 13:00:06 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char *s)
{
	int q;

	q = 0;
	if (s)
	{
		while (s[q])
		{
			write(1, &s[q], 1);
			q++;
		}
		write(1, "\n", 1);
	}
}