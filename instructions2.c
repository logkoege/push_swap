/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:59:23 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 17:51:26 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a, int n)
{
	int		nombre;
	t_stack	*temp;

	if (!(*stack_a))
		return ;
	nombre = (*stack_a)->data;
	temp = (*stack_a)->next;
	free(*stack_a);
	(*stack_a) = temp;
	ft_lstadd_back(stack_a, new_stack(nombre));
	if (n == 0)
		write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b, int n)
{
	int		nombre;
	t_stack	*temp;

	if (!(*stack_b))
		return ;
	nombre = (*stack_b)->data;
	temp = (*stack_b)->next;
	free(*stack_b);
	(*stack_b) = temp;
	ft_lstadd_back(stack_b, new_stack(nombre));
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
	t_stack	*temp;
	t_stack	*tmp;
	int		len;
	int		i;

	if (!(*stack_a))
		return ;
	i = 0;
	temp = (*stack_a);
	len = stack_size(*stack_a);
	while (i < len - 2)
	{
		i++;
		(*stack_a) = (*stack_a)->next;
	}
	tmp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	tmp->next = temp;
	(*stack_a) = tmp;
	if (n == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b, int n)
{
	int		data;
	t_stack	*temp;
	t_stack	*tmp;
	int		len;
	int		i;

	if (!(*stack_b))
		return ;
	i = 0;
	temp = (*stack_b);
	len = stack_size(*stack_b);
	while (i < len - 2)
	{
		i++;
		(*stack_b) = (*stack_b)->next;
	}
	tmp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	data = tmp->data;
	free(tmp);
	(*stack_b) = temp;
	ft_lstadd_front(stack_b, new_stack(data));
	if (n == 0)
		write(1, "rrb\n", 4);
}
