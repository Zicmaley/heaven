/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlykhodi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:48:11 by vlykhodi          #+#    #+#             */
/*   Updated: 2017/10/30 14:52:43 by vlykhodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, char *src)
{
	int	q;

	q = 0;
	while (src[q] != '\0')
	{
		dst[q] = src[q];
		q++;
	}
	dst[q] = '\0';
	return (dst);
}
