/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:53:49 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/18 23:42:07 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	total_len;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = (char *)malloc(total_len * sizeof(char));
	if (ptr)
	{
		ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
		ft_strlcat(ptr, s2, total_len);
		ptr[total_len - 1] = '\0';
		return (ptr);
	}
	else
		return (0);
}
