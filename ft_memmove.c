/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:16:43 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/29 15:01:04 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		l;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (char *)dst;
	s = (const char *)src;
	l = 0;
	if (d < s)
	{
		while (l < len)
		{
			d[l] = s[l];
			l++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	return (dst);
}
