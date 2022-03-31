/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeheyt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:47:15 by pbeheyt           #+#    #+#             */
/*   Updated: 2022/03/20 11:41:04 by pbeheyt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    while (dest[i])
        i++;
    j = 0;
    while (src[j])
        j++;
    if (size < i)
        j = j + size;
    else
        j = j + i;
    k = 0;
    while (src[k] != '\0' && i < (size - 1) && size != '\0')
    {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[i] = '\0';
    return (j);
}

void  main(void)
{
  char str[19] = "salut ca va";
  char tofind[] = "testtes";
  
  ft_strlcat(str, tofind, 18);
}
