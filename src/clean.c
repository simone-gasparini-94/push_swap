/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:53:55 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:25:18 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"
#include "clean.h"

void	clean_all(t_node **a, t_node **b, char ***arr)
{
	if (*a != NULL)
		clean_list(a);
	if (*b != NULL)
		clean_list(b);
	if (*arr != NULL)
		clean_arr(arr);
}

void	clean_arr(char ***arr)
{
	int	i;

	i = 0;
	while ((*arr)[i] != NULL)
		free((*arr)[i++]);
	free(*arr);
}

void	clean_list(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		*stack = (*stack)->next;
		free(temp);
		temp = *stack;
	}
}
