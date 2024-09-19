/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:24:20 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/19 17:55:05 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_positive(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

t_stack	*ft_min(t_stack *lst)
{
	t_stack	lst_min;
	int		i;

	lst_min = lst->data;
	i = lst->data;
	while (lst)
	{
		if (lst->data < i)
		{
			i = lst->data;
			lst_min = lst;
		}
		lst = lst->next;
	}
	return (lst_min);
}

t_stack	*ft_max(t_stack *lst)
{
	t_stack	lst_max;
	int		i;

	lst_max = lst->data;
	i = lst->data;
	while (lst)
	{
		if (lst->data > i)
		{
			i = lst->data;
			lst_max = lst;
		}
		lst = lst->next;
	}
	return (lst_max);
}
