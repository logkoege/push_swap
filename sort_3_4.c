/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:41:38 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/17 15:54:39 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_pushswap *ps)
{
	int	i;

	i = 0;
	if (sort3d(ps->a))
		return ;
	else if (ft_min(ps->a) == ps->a->data)
	{
		sa(ps);
		ra(ps);
	}
	else if (ft_max(ps->a) == ps->a->data)
	{
		ra(ps);
		if (!(sort3d(ps->a)))
			sa(ps);
	}
	else
	{
		sa(ps);
		if (!(sort3d(ps->a)))
		{
			ra(ps);
			sa(ps);
		}
	}
}

int	ft_min(t_node *lst)
{
	int	i;

	i = lst->data;
	while (lst)
	{
		if (lst->data < i)
			i = lst->data;
		lst = lst->next;
	}
	return (i);
}

int	ft_max(t_node *lst)
{
	int	i;

	i = lst->data;
	while (lst)
	{
		if (lst->data > i)
			i = lst->data;
		lst = lst->next;
	}
	return (i);
}

int	sort3d(t_node *lst)
{
	t_node	*tmp;

	while (lst)
	{
		tmp = lst->next;
		if (lst->data < tmp->data)
		{
			lst = tmp->next;
			if (tmp->data < lst->data)
			{
				return (1);
			}
		}
	}
	return (0);
}

void	sort4(t_pushswap *ps)
{
	while (!(ft_min(ps->a) == ps->a->data))
	{
		ra(ps);
	}
	pb(ps);
	sort3(ps);
	pa(ps);
}
