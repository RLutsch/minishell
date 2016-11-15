/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 15:46:08 by rlutsch           #+#    #+#             */
/*   Updated: 2016/11/15 07:58:24 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	int		len;

	len = -1;
	while (s1[++len])
		;
	c = (char *)malloc(len * sizeof(char) + 1);
	if (c != NULL)
		ft_strcpy(c, s1);
	*(c + len) = '\0';
	return (c);
}
