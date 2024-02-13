/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:28:44 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/09 11:52:20 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *destination;
	unsigned char *source;
	size_t count;

	if (src == dst || len == 0)
		return (dst);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (src < dst)
	{
		count = len;
		while (count > 0)
		{
			count--;
			destination[count] = source[count];
		}
	}
	else
	{
		count = 0;
		while (count < len)
		{
			destination[count] = source[count];
			count++;
		}
	}
	return (dst);
}