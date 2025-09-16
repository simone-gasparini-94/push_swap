/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:48:54 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 12:18:15 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_ARGS_H
# define CHECK_ARGS_H

# include <stdbool.h>
# include "structs.h"

bool	are_arguments_valid(char **arr);
bool	is_string_a_number(char *s);
bool	are_stack_values_valid(t_node *stack);
bool	are_values_in_range(t_node *stack);
bool	are_values_unique(t_node *stack);

#endif
