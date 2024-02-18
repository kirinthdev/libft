/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:26:17 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 22:59:10 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *s)
{
	unsigned long	strlen;

	strlen = 0;
	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
