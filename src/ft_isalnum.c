/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:33:26 by sergmart          #+#    #+#             */
/*   Updated: 2024/01/24 12:38:03 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

/****** MAIN
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    printf("%d", isalnum(78));
    printf("%d", ft_isalnum(78));
    return (0);
}
******/