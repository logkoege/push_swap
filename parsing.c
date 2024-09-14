/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 06:22:57 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/14 21:48:47 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_minmaxcheck(char **args)
{
	int	i;

	i = 1;
	while (args[i])
	{
		if (ft_atol(args[i]) == 21474836480)
			return (0);
		i++;
	}
	return (1);
}

t_node	*ft_lstlast2(t_node *tmp)
{
	if (tmp == NULL)
		return (0);
	while (tmp)
	{
		if (tmp->next == NULL)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
