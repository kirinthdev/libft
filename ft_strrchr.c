/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:26:51 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 23:01:22 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned long	len;
	char			ch;

	ch = (char)c;
	len = ft_strlen(s);
	if (ch == '\0')
		return ((char *)(s + len));
	while (len > 0)
	{
		if (*(s + len - 1) == ch)
			return ((char *)(s + len - 1));
		len--;
	}
	return (0);
}
