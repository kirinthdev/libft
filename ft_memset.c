/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:28:21 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 23:11:57 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned long	count;
	unsigned char	*ptr;

	ptr = b;
	count = 0;
	while (count < len)
	{
		*ptr = (unsigned char)c;
		count++;
		ptr++;
	}
	return (ptr - count);
}
