/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:25:39 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/09 14:51:03 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*dst;
	unsigned char	*sr;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;

	if(sr < dst)
	{
		i = n;
		while(i-- > 0)
		{
			dst[i] = sr[i];
		}
		return (dest);
	}
	ft_memcpy(dst,sr,n);
	return (dest);
}
