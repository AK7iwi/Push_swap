/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/04 01:14:34 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Algo de tri*/

// t_stack *push_swap(t_stack *stack)
// {
// int i;
// i = ft_lstsize(stack);

// 	if(i< 100)
// 		algo1();
// 	else if(i >= 100 && i <= 500)
// 		algo2()
// 	else if (i > 500)
// 		algo3()
	
// 	t_stack *stack;
// 	int i;
// 	i = 0;
// 	while(i < 5)
// 		stack->astack[i++] = 5;
// 	return(stack);
// }

/*Message d'erreur*/

int main(int argc, char **argv)
{
	int i;
	t_listdc l;
	
	i = 0;
	initld(&l);
	while(argv[i] && argc != 0)
		ldfill_stack(&l, ft_atoi(parsing(argv[i++])));
	ldfree_stack(&l);
	return(0);
}