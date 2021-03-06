/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:07:31 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 15:10:48 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char const *s, int fd)
{
	int q;

	q = 0;
	if (s)
	{
		while (s[q] != '\0')
		{
			write(fd, &s[q], 1);
			q++;
		}
		write(fd, "\n", 1);
	}
}
