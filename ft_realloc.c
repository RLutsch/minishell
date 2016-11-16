/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 14:02:23 by                   #+#    #+#             */
/*   Updated: 2016/08/05 14:00:35 by janhoon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

void	*ft_realloc(void *ptr, size_t n)
{
	char	*nptr;

	if (!n && ptr)
	{
		if (!(nptr = (char *)malloc(1)))
			return (NULL);
		free(ptr);
		return (nptr);
	}
	if (!(nptr = (char *)malloc(n)))
	{
		return (NULL);
	}
	if (ptr)
	{
		ft_memcpy(nptr, ptr, n);
		free(ptr);
	}
	return (nptr);
}
