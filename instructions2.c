/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:59:23 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/20 20:22:46 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a, int n)
{
	t_stack	*lst_temp;
	int		intemp;

	if (!(*stack_a))
		return ;
	intemp = (*stack_a)->data;
	lst_temp = (*stack_a)->next;
	free(*stack_a);
	(*stack_a) = lst_temp;
	ft_lstadd_back(stack_a, new_stack(intemp));
	if (n == 0)
		write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b, int n)
{
	t_stack	*lst_temp;
	int		intemp;

	if (!(*stack_b))
		return ;
	intemp = (*stack_b)->data;
	lst_temp = (*stack_b)->next;
	free(*stack_b);
	(*stack_b) = lst_temp;
	ft_lstadd_back(stack_b, new_stack(intemp));
	if (n == 0)
		write(1, "rb\n", 3);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	write(1, "rr\n", 3);
}

void	rra(t_stack **stack_a, int n)
{
	t_stack	*lst_temp;
	t_stack	*lst_temp2;
	int		len;
	int		i;

	if (!(*stack_a))
		return ;
	i = 0;
	lst_temp = (*stack_a);
	len = stack_size(*stack_a);
	while (i < len - 2)
	{
		i++;
		(*stack_a) = (*stack_a)->next;
	}
	lst_temp2 = (*stack_a)->next;
	(*stack_a)->next = NULL;
	lst_temp2->next = lst_temp;
	(*stack_a) = lst_temp2;
	if (n == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b, int n)
{
	int		intemp;
	t_stack	*lst_temp;
	t_stack	*lst_temp2;
	int		len;
	int		i;

	if (!(*stack_b))
		return ;
	i = 0;
	lst_temp = (*stack_b);
	len = stack_size(*stack_b);
	while (i < len - 2)
	{
		i++;
		(*stack_b) = (*stack_b)->next;
	}
	lst_temp2 = (*stack_b)->next;
	(*stack_b)->next = NULL;
	intemp = lst_temp2->data;
	free(lst_temp2);
	(*stack_b) = lst_temp;
	ft_lstadd_front(stack_b, new_stack(intemp));
	if (n == 0)
		write(1, "rrb\n", 4);
}
