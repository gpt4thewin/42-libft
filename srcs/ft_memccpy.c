/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:29:07 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/16 18:29:07 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
   size_t         i;
   unsigned char  curr;

   i = 0;
   while (i < n)
   {
      curr = ((unsigned char*)src)[i];
      ((unsigned char*)dest)[i] = curr;
      i++;
      if (curr == (unsigned char)c)
         return (src + i);
   }

   return (NULL);
}