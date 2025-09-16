/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:32:06 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/06 14:12:15 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "structs.h"

void	swap(t_node **stack, char c);
void	push(t_node **from, t_node **to, char c);
void	rotate(t_node **stack, char c);
void	reverse_rotate(t_node **stack, char c);

#endif
