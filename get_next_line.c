/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 13:33:00 by                   #+#    #+#             */
/*   Updated: 2016/08/25 14:01:08 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_next_line(int fd, char **line)
{
	int			buff = BUFFSIZE;
	static int	i;
	int			c;
	int			j = 0;

	i = 0;
	line[j] = malloc(sizeof(char) * buff);
	if (!line[j])
	{
		ft_putstr("Malloc error\n");
		j--;
		return (-1);
	}
	while (1)
	{
		c = ft_getchar_fd(fd);
		if (c == '\0' || c == '\n')
		{
			line[j][i] = '\0';
			if (c == '\n')
				return (1);
			else if (c == '\0')
				return (0);
		}
		else if (c == -1)
		{
			return (-1);
		}
		else
		{
			line[j][i] = c;
		}
		i++;
		if (i >= buff)
		{
			buff += BUFFSIZE;
			line[j] = ft_realloc(line[j], buff);
			if (!line[j])
			{
				ft_putstr("Malloc error\n");
				j--;
				return (-1);
			}
		}
	}
	j++;
}
