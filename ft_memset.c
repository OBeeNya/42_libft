/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:48:25 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/29 10:17:57 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*set;

	i = 0;
	set = (unsigned char *)s;
	while (i < n)
	{
		set[i] = c;
		i++;
	}
	s = (void *)set;
	return (s);
}
