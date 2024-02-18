/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:39:30 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 23:15:54 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned long count, unsigned long size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr != 0)
		ft_memset(ptr, 0, count * size);
	return (ptr);
}
