/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:52:35 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/29 15:27:41 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len2;

	if (*little == '\0')
		return ((char *)big);
	len2 = ft_strlen(little);
	while (*big != '\0' && len-- >= len2)
	{
		if (*big == *little && ft_strncmp(big, little, len2) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
