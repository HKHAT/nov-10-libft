/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:29 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/06 12:08:40 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	i = 0;
	unsigned char *dst;
	unsigned char *sr;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if(dst == NULL && sr == NULL)
	{
		return (dest);
	}
	while(i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
