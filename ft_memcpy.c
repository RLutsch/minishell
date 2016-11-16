/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/29 15:56:57 by                   #+#    #+#             */
/*   Updated: 2016/08/02 13:15:44 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
	return (dest);
}