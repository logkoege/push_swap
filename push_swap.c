/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:47:18 by logkoege          #+#    #+#             */
/*   Updated: 2024/09/29 17:53:55 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_b;
	t_stack	*stack_a;

	if ((ac < 2) || (ac >= 2 && ft_strlen(av[1]) == 0))
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = fill_stack_a(av);
	if (sorted(stack_a) != 0)
	{
		if (stack_size(stack_a) == 2)
			sa(stack_a, 0);
		else if (stack_size(stack_a) == 3)
			sort3(&stack_a);
		else
			sort(&stack_a, &stack_b);
	}
	free_lst(&stack_a);
	free_lst(&stack_b);
	return (0);
}
