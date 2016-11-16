/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 14:49:27 by rlutsch           #+#    #+#             */
/*   Updated: 2016/08/07 14:45:55 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int		ft_operator(char **av)
{
	if (ft_strcmp(av[0], "cd") == 0)
	{
		ft_cd(av);
		return (0);
	}
	if (ft_strcmp(av[0], "echo") == 0)
	{
		ft_echo(av);
		return (0);
	}
	if (ft_strcmp(av[0], "env") == 0)
	{	
		ft_env();
		return (0);
	}
	if (ft_strcmp(av[0], "setenv") == 0)
		return (0);
	if (ft_strcmp(av[0], "unsetenv") == 0)
		return (0);
	if (ft_strcmp(av[0], "exit") == 0)
		return (1);
	return (-1);
}
