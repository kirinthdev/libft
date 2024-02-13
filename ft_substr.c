/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:12:56 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/09 11:53:08 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*j;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	j = malloc(sizeof(char) * (len + 1));
	if (!j)
		return (0);
	ft_strlcpy(j, s + start, len + 1);
	return (j);
}*/
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *j;

	if (!s)
		return (NULL);

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));

	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);

	j = malloc(sizeof(char) * (len + 1));
	if (!j)
		return (NULL);

	ft_strlcpy(j, s + start, len + 1);
	return (j);
}