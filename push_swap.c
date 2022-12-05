/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/05 16:44:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Algo de tri*/

void *push_swap(t_stack *stack)
{
	int i;
	i = ft_lstsize(stack);

	if(i< 100)
		printf("%d", i);
		// algo1();
	else if(i >= 100 && i <= 500)
		printf("%d", i);
		// algo2();
	else if (i > 500)
		printf("%d", i);
		// algo3();
}

/*Message d'erreur*/

int main(int argc, char **argv)
{
	int i;
	char *tab;
	t_listdc l;
	
	i = 0;
	initld(&l);
	while(argv[i] && argc != 0)
	{
		tab = ft_parsing(argv[i++]);
		ldfill_stack(&l, ft_atoi(tab));
		free(tab);
	}
	push_swap(&l);
	ldfree_stack(&l);
	return(0);
}