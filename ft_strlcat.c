/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:01:47 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/29 14:20:13 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(dst);
	k = ft_strlen(src);
	if (dstsize < j + 1)
		return (dstsize + k);
	if (dstsize > j + 1)
	{
		while (src[i] != '\0' && j + 1 + i < dstsize)
		{
			dst[j + i] = src[i];
			i++;
		}
	}
	dst[j + i] = '\0';
	return (j + ft_strlen(src));
}
