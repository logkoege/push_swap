/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:41:38 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/16 03:49:28 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_node *lst)
{
	int	i;
	
	i = 0;
	if(sort3d(lst))
		return;
	else if (ft_min(lst) = lst->data)
	{
		sa(lst);
		ra(lst);
	}
	else if (ft_max(lst) = lst->data)
	{
		ra(lst);
		if (!sort3d(lst))
			sa(lst);
	}
	else 
	{
		sa(lst)
		if (!sort3d(lst))
		{
			ra(lst);
			sa(lst);
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
int sort3d(t_node *lst)
{
	t_node	*tmp;
	
	tmp = lst->next;
	if (lst->data < tmp->data)
	{
		lst = tmp->next;
		if (tmp->data < lst->data)
		{
			return (1);
		}
	}
	return (0);
}
void	sort4(t_node *lst)
{
	
}