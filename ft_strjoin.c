/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 15:09:42 by rlutsch           #+#    #+#             */
/*   Updated: 2016/08/07 14:29:39 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*t;

	t = (char *)malloc(sizeof(char) * sizeof(s2) + ft_strlen(s1) + 1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		t[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		t[i] = s2[j];
		i++;
		j++;
	}
	t[i] = '\0';
	return (t);
}
