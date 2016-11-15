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

/*char	**ft_env(char **env)
{
	extern char **environ;
	char	**tmp;
	int		i;

	i = 0;
	printf("%s\n", "here : ");
	if (!(tmp = malloc(sizeof(char*) * ft_tablen(env) + 1)))
		return (NULL);
	while (env[i])
	{
		tmp[i] = ft_strdup(env[i]);
		i++;
	}
	return (tmp);
}
*/

char **ft_env(char **env)
{
	extern char	**environ;
	int			i;

	i = 0;
	i = ft_tablen(environ);
	while(--i)
	{
		printf("%s\n",(environ[i]));
	}
	return (env);
}

