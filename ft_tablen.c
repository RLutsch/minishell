/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutsch <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 15:44:37 by rlutsch           #+#    #+#             */
/*   Updated: 2016/08/06 17:32:39 by rlutsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "21sh.h"

int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
