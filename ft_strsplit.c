/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 15:26:10 by rlutsch           #+#    #+#             */
/*   Updated: 2016/08/07 14:37:46 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**av;
	int		v[4];

	av = ft_strsplit_init(s, c, v, -1);
	v[0] = -1;
	while (s[++v[0]])
	{
		if (s[v[0]] != c && v[3] == -1)
			v[2] += (++v[3] - v[3]) + 1;
		if (s[v[0]] == c && v[3] == 0)
			v[1] = --v[3];
		if (s[v[0]] != c)
			av[v[2]][++v[1]] = s[v[0]];
	}
	av[v[2] + 1] = 0;
	return (av);
}

char	**ft_strsplit_init(char const *s, char c, int *v, size_t i)
{
	char	**av;

	v[0] = 4;
	while (--v[0])
		v[v[0]] = 0;
	while (s[++i])
	{
		if (s[i] != c && (v[2] = v[2] + 1))
			while (s[i] && s[i] != c && (v[0] = v[0] + 1))
				i++;
		if ((v[0] > v[1]) && (v[1] = v[0]))
			;
	}
	av = (char **)malloc(sizeof(char *) * v[2] + 2);
	while ((++v[3] - 1) <= v[2])
		av[v[3] - 1] = (char *)malloc(sizeof(char) * v[1]);
	v[0] = 4;
	while (--v[0])
		v[v[0]] = -1;
	return (av);
}
