/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:01:14 by sergmart          #+#    #+#             */
/*   Updated: 2024/02/13 17:18:22 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_c(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count + 1);
}

size_t	len_of_c(size_t start, char const *s, char c)
{
	size_t	len_c;

	len_c = 0;
	while (s[start + len_c] != c && s[start + len_c] != '\0')
		len_c++;
	return (len_c);
}

int	split_strings(char const *s, char c, char **str, size_t count)
{
	size_t	i;
	size_t	start;
	size_t	len_c;

	i = 0;
	start = 0;
	while (i < count - 1)
	{
		while (s[start] == c)
			start++;
		len_c = len_of_c(start, s, c);
		str[i] = (char *)malloc((len_c + 1) * sizeof(char));
		if (!str[i])
			return (0);
		ft_strlcpy(str[i], s + start, len_c + 1);
		start = start + len_c;
		i++;
	}
	str[count - 1] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char **str;
	size_t count;

	count = count_c(s, c);
	str = (char **)malloc(count * sizeof(char *));
	if (!str)
		return (NULL);
	if (!split_strings(s, c, str, count))
	{
		while (count--)
			free(str[count]);
		free(str);
		return (NULL);
	}
	return (str);
}