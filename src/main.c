/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaspari <sgaspari@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:27:04 by sgaspari          #+#    #+#             */
/*   Updated: 2025/08/13 13:19:59 by sgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "array.h"
#include "list.h"
#include "check_args.h"
#include "sort.h"
#include "clean.h"
#include "structs.h"
#include "exit_failure.h"

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	char	**arr;

	a = NULL;
	b = NULL;
	arr = NULL;
	if (--argc == 0)
		exit (EXIT_FAILURE);
	arr = get_array(&argc, ++argv);
	if (are_arguments_valid(arr) == false)
		exit_failure(&a, &b, &arr);
	a = create_list(arr);
	if (are_stack_values_valid(a) == false)
		exit_failure(&a, &b, &arr);
	assign_ranks(a, argc);
	sort(argc, &a, &b, &arr);
	clean_all(&a, &b, &arr);
	return (0);
}
