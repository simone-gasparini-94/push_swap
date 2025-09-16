/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:38:18 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:37:16 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <limits.h>
#include "libft.h"
#include "structs.h"
#include "check_args.h"

bool	are_arguments_valid(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i] != NULL)
	{
		j = 0;
		if (arr[i][j] == '-' || arr[i][j] == '+')
			j++;
		while (arr[i][j] != '\0')
		{
			if (ft_isdigit(arr[i][j]) == false)
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	are_stack_values_valid(t_node *stack)
{
	if (are_values_in_range(stack) == false
		|| are_values_unique(stack) == false)
		return (false);
	return (true);
}

bool	are_values_in_range(t_node *stack)
{
	t_node	*curr;

	if (!stack)
		return (true);
	curr = stack;
	while (curr != NULL)
	{
		if (curr->value > INT_MAX || curr->value < INT_MIN)
			return (false);
		curr = curr->next;
	}
	return (true);
}

bool	are_values_unique(t_node *stack)
{
	t_node	*i;
	t_node	*j;

	i = stack;
	while (i->next != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (j->value == i->value)
				return (false);
			j = j->next;
		}
		i = i->next;
	}
	return (true);
}
