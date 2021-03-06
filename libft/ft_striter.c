/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:44:38 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/11/10 19:09:32 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int q;

	q = 0;
	if (s && f)
	{
		while (s[q] != '\0')
		{
			f(&s[q]);
			q++;
		}
	}
}
