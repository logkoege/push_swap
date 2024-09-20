/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:08:24 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/20 20:17:34 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*lst_temp;

	if (!(*stack_b))
		return ;
	ft_lstadd_front(stack_a, new_stack((*stack_b)->data));
	lst_temp = (*stack_b)->next;
	free(*stack_b);
	(*stack_b) = lst_temp;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*lst_temp;

	if (!(*stack_a))
		return ;
	ft_lstadd_front(stack_b, new_stack((*stack_a)->data));
	lst_temp = (*stack_a)->next;
	free(*stack_a);
	(*stack_a) = lst_temp;
	write(1, "pb\n", 3);
}

t_stack	*sa(t_stack *lst, int n)
{
	t_stack	*lst_temp;
	int		temp;

	lst_temp = lst;
	if (!lst->next)
		return (NULL);
	lst = lst->next;
	temp = lst->data;
	lst->data = lst_temp->data;
	lst = lst_temp;
	lst->data = temp;
	if (n == 0)
		write(1, "sa\n", 3);
	return (lst);
}

t_stack	*sb(t_stack *lst, int n)
{
	t_stack	*lst_temp;
	int		temp;

	if (!lst)
		return (NULL);
	lst_temp = lst;
	if (lst->next == NULL)
		return (NULL);
	lst = lst->next;
	temp = lst->data;
	lst->data = lst_temp->data;
	lst_temp->data = temp;
	if (n == 0)
		write(1, "sb\n", 3);
	return (lst);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(*stack_a, 1);
	sb(*stack_b, 1);
	write(1, "ss\n", 3);
}
