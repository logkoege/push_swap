/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:18:15 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/17 20:34:02 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*fill_stack(int argc, char **argv)
{
	t_node	*stack_a;
	int		number;
	int		i;

	stack_a = NULL;
	number = 0;
	i = 1;
	while (i < argc)
	{
		number = ft_atol(argv[i]);
		if (i == 1)
			stack_a = new_stack(number);
		else
			stack_add(&stack_a, new_stack(number));
		i++;
	}
	return (stack_a);
}

// void	index_stack(t_node *stack_a, int s_stack)
// {
// 	stack_a = stack_a;
// 	s_stack = s_stack;
// }

t_node	*new_stack(int data)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	stack_add(t_node **stack, t_node *new)
{
	t_node	*last;

	if (!new)
		return ;
	if (!*stack)
	{
		*stack = new;
		return ;
	}
	last = ft_lstlast2(*stack);
	last->next = new;
}

void	pre_sort(t_pushswap *ps, int s_stack)
{
	if (s_stack == 2 && !is_sorted(ps->a))
		sa(ps);
	else if (s_stack == 3)
		sort3(ps);
	else if (s_stack == 5)
		sort5(ps);
	else if (sort)
}
