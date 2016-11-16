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
	
	pwd = malloc(sizeof(char*) * 256);
	if (!av[1])
	{
		pwd = ft_strjoin(pwd, getenv("HOME"));
		stat(pwd, &statbuf);
	}
	else if (av[1])
		stat(av[1], &statbuf);
	printf("%d\n", ft_strcmp(av[1], "-"));
	if (((S_ISDIR(statbuf.st_mode)) == 1) || (ft_strcmp(av[1],"-") == 0))
	{
		if (av[1])
		{
			pwd = ft_getpwd(av[1], pwd);
			//pwd = getcwd(pwd, 256);
			printf("%s\n", pwd);
			pwd = ft_strjoin(pwd, "/");
			pwd = ft_strjoin(pwd, av[1]);
		}
		chdir(pwd);
	}
	else ft_putstr("invalid directory\n");
//	printf("%s\n old pwd : ", getenv("OLDPWD"));
	printf("%s\n current pwd : ", getenv("OLDPWD"));
	return (pwd);
}

char	*ft_getpwd(char *av, char *pwd)
{
	struct stat	statbuf;
	if (ft_strcmp(av, "-") == 0)
	{
		pwd = ft_strjoin(pwd, getenv("HOME"));
		stat(pwd, &statbuf);
	}
	else
	{
		pwd = getcwd(pwd, 256);
	}
	return (pwd);
}