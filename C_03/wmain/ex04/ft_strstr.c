/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/21 20:54:04 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[i] == '\0')
        return (str);
    j = 0;
    while (str[j] != '\0')
    {
        i = 0;
        while (to_find[i] == '\0' || to_find[i] == str[j + i])
        {
            if (to_find[i] == '\0')
                return (str + j);
            i++;
        }
        j++;
    }
    return (0);
}

int	 main(void)
{
  char str[] = "salut comcommemt ca cava";
  char tofind[] = "comment";
  
  printf("%s", ft_strstr(str, tofind));

return(0);
}
