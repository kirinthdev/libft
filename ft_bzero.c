/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:28:11 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 23:02:12 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	count;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		*ptr = 0;
		count++;
		ptr++;
	}
}
