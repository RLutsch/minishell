/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21sh.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 13:39:13 by rlutsch           #+#    #+#             */
/*   Updated: 2016/11/15 07:29:29 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int		main()
{
	int		nb;
	char	**arg;
	char	*p;

	nb = 0;
	p = malloc(sizeof(char*) * 1000);
	while (1)
	{
		ft_bzero(p, ft_strlen(p));
		ft_putstr("$> ");
		nb = get_next_line(0, &p);
		if (nb != 1)
			p[nb - 1] = '\0';
		arg = ft_strsplit(p, ' ');
		if (ft_strcmp(arg[0], "exit") == 0)
		{
			return (0);
		}
		ft_command(arg);
	}
}
