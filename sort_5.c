/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:04:03 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/16 16:11:47 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5(t_node *lst)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = lst;
	if (!ft_min(tmp) == tmp->data)
	{
		while (i != 2)
		{
			ra(tmp);
			i++;
		}
		while (!ft_min(lst) == lst->data)
			rra(lst);
	}
	pb(lst);
	sort4(lst);
	pa(lst);
}
