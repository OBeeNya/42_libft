/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:20:56 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/30 14:05:15 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static	char	*ft_write_nb(char *itoa, unsigned int nb, int len)
{
	while (nb > 0)
	{
		itoa[len--] = nb % 10 + 48;
		nb /= 10;
	}
	return (itoa);
}

char	*ft_itoa(int n)
{
	char			*itoa;
	int				len;
	unsigned int	nb;

	len = ft_nb_len(n);
	itoa = (char *)malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	itoa[len--] = '\0';
	if (n == 0)
		itoa[0] = '0';
	if (n < 0)
	{
		nb = n * -1;
		itoa[0] = '-';
	}
	else
		nb = n;
	itoa = ft_write_nb(itoa, nb, len);
	return (itoa);
}
