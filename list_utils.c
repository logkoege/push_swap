/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:34:24 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/19 17:36:06 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lst(t_stack **lst)
{
	t_stack	*lst_temp;

	while ((*lst) != NULL)
	{
		lst_temp = (*lst)->next;
		free(*lst);
		(*lst) = lst_temp;
	}
}

int	stack_size(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
