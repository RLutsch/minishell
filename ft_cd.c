/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 13:41:09 by rlutsch           #+#    #+#             */
/*   Updated: 2016/11/14 14:24:53 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

char	*ft_cd(char **av)
{
	char		*pwd;
	struct stat	statbuf;
	int			x;

	x = 0;
	pwd = malloc(sizeof(char*) * 256);
	if (!av[1])
	{
		pwd = ft_strjoin(pwd, getenv("HOME"));
		stat(pwd, &statbuf);
		printf("%s/n", pwd);
	}
	else if (av[1])
		stat(av[1], &statbuf);
	if (((S_ISDIR(statbuf.st_mode)) == 1))
	{
		if (av[1])
		{
			pwd = getcwd(pwd, 256);
			pwd = ft_strjoin(pwd, "/");
			pwd = ft_strjoin(pwd, av[1]);
		}
		x = chdir(pwd);
	}
	else ft_putstr("invalid directory\n");
	return (pwd);
}
