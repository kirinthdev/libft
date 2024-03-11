/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:29:28 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 23:11:31 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned char	ch;
	unsigned char	*pt_s;
	unsigned long	i;

	ch = (unsigned char)c;
	pt_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (pt_s[i] == ch)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
