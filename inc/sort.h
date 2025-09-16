/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:52:20 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:24:18 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include <stdbool.h>
# include "structs.h"

void	sort(int argc, t_node **a, t_node **b, char ***arr);
bool	is_stack_sorted(t_node *stack);
bool	is_stack_empty(t_node *stack);
void	sort_two(t_node **a);
void	sort_three(t_node **a);
void	sort_five(t_node **a, t_node **b);
void	sort_small(t_node **a, t_node **b);
void	sort_large(t_node **a, t_node **b);
int		get_bit_length(t_node *a);
int		get_max_rank(t_node *a);

#endif
