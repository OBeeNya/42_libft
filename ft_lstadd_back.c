/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:20:54 by baubigna          #+#    #+#             */
/*   Updated: 2021/11/30 17:52:22 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*a;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			a = ft_lstlast(*(alst));
			a->next = new;
		}
	}
}
