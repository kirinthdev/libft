/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergmart <sergiomga136@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:18:53 by sergmart          #+#    #+#             */
/*   Updated: 2024/01/24 12:31:45 by sergmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/******* MAIN
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    printf("%d", isdigit(50));
    printf("%d", ft_isdigit(50));
    return (0);
}
*******/
