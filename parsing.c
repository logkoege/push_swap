/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 06:22:57 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/17 17:06:29 by logkoege         ###   ########.fr       */
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
		{
			ft_printf("error");
			return (0);
		}
		i++;
	}
	return (1);
}

t_node	*ft_lstlast2(t_node *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
