/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:06:29 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:23:43 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "structs.h"
#include "sort.h"
#include "list.h"
#include "clean.h"

void	sort(int argc, t_node **a, t_node **b, char ***arr)
{
	if ((is_stack_sorted(*a) == true)
		&& is_stack_empty(*b) == true)
	{
		clean_all(a, b, arr);
		exit (EXIT_SUCCESS);
	}
	if (argc == 2)
		sort_two(a);
	else if (argc == 3)
		sort_three(a);
	else if (argc > 3 && argc < 9)
		sort_small(a, b);
	else
		sort_large(a, b);
}

bool	is_stack_sorted(t_node *stack)
{
	t_node	*curr;
	t_node	*prev;

	curr = stack->next;
	prev = stack;
	while (curr != NULL)
	{
		if (prev->value > curr->value)
			return (false);
		prev = curr;
		curr = curr->next;
	}
	return (true);
}

bool	is_stack_empty(t_node *stack)
{
	return (stack == NULL);
}
