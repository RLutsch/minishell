/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 15:36:11 by rlutsch           #+#    #+#             */
/*   Updated: 2016/08/07 14:45:28 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char **ft_env(char **env)
{
	extern char	**environ;
	int			i;

	i = 0;
	i = ft_tablen(environ);
	while(--i)
	{
		ft_putstr(environ[i]);
		ft_putstr("\n");
	}
	return (env);
}

