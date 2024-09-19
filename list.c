/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:21:05 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/19 17:37:44 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort3d(t_stack *lst)
{
	t_stack	*lst_temp;

	if (!lst || !lst->next)
		return (1);
	lst_temp = lst->next;
	while (lst_temp)
	{
		if (lst->data > lst_temp->data)
			return (1);
		lst = lst_temp;
		lst_temp = lst_temp->next;
	}
	return (0);
}

t_stack	*new_stack(int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->data = n;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

t_stack	*ft_lstlast2(t_stack *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*lst_temp;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		(*lst) = new;
		return ;
	}
	lst_temp = ft_lstlast2(*lst);
	lst_temp->next = new;
}
