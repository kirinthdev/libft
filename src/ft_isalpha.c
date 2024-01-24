/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:12:13 by sergmart          #+#    #+#             */
/*   Updated: 2024/01/24 12:16:32 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    return (ft_islower(c) || ft_isupper(c));
}

/******* MAIN
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    printf("%d", isalpha(65));
    printf("%d", ft_isalpha(65));
    return (0);
}
*******/
