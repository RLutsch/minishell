/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 11:26:30 by rlutsch           #+#    #+#             */
/*   Updated: 2016/11/14 14:50:33 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

void	ft_command(char **av)
{
	char		*p;
	pid_t		father;
	extern char **environ;
	char		**path;
	int			i;

	i = 0;
	i = ft_operator(av);
	path = ft_strsplit(getenv("PATH"), ':');
	i = ft_tablen(path);
	father = fork();
		if (i == 1)
		kill(father, -1);
			else if (i != 0)
	{
	if (father == 0){
		while (i-- > 0)
		{
			if (ft_strncmp(av[0], "/bin/", 5) != 0)
				p = ft_strjoin(ft_strjoin(path[i], "/"), av[0]);
			execve(p, av, environ);
		}
		ft_putstr("command not found:");
		ft_putstr(ft_strjoin(av[0], "\n"));
		free(av);
	}
	else
		wait(0);
	}
}
