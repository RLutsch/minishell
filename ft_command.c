/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 11:26:30 by rlutsch           #+#    #+#             */
/*   Updated: 2016/08/07 14:54:18 by rlutsch          ###   ########.fr       */
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
	if (ft_operator(av) == 1)
		kill(father, -1);
	if (ft_strncmp(av[0], "/bin/", 5) != 0)
		p = ft_strjoin("/bin/", av[0]);
	else
		p = av[0];
	path = ft_strsplit(getenv("PATH"), ':');
	i = ft_tablen(path);
	father = fork();
	if (father == 0)
		while (i-- > 0)
		{
			p = ft_strjoin(ft_strjoin(path[i], "/"), av[0]);
			execve(p, av, environ);
		}
	else
		wait(0);
}
