/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:47:53 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/30 14:26:12 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*r;
	size_t		i;
	size_t		j;

	r = malloc(sizeof(char) * (len + 1));
	if (!r || !s)
		return (r);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			r[j] = s[i];
			j++;
		}
		i++;
	}
	r[j] = '\0';
	return (r);
}
