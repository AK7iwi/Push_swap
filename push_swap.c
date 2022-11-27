/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/27 03:05:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Algo de tri*/

// t_stack *push_swap(t_stack *prestack)
// {
// 	if(ft_intlen(prestack.astack) < 100)
// 		algo1();
// 	else if(ft_intlen(prestack.astack) >= 100 && ft_intlen(prestack.astack) <= 500)
// 		algo2()
// 	else if (ft_intlen(prestack.astack)> 500)
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
	t_stack stack;
	
	i = 1;
	while(argv[i] && argc != 0)
	{
		stack.stack_a[i] = ft_atoi(argv[i]);
		i++;
		printf("%ls", stack.stack_a);
	}
	return(0);
}

/*Essayer les structures (voir avec la lib)*/
/*t_pile *t = ft_atoi(argv),va dans push_swap*/
/*strcut dans struct*/