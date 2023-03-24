/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/24 03:18:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*Distribution des algos*/

void push_swap(t_stack **a,t_stack **b)
{
	int i;
	i = ft_dlstsize(*a);
	// printf("%d", ft_dlstsize(*a));
	// printf("%d", ft_dlstsize(*b));
	if(is_sorted(*a) == 1)
			return;
	else if(i == 2)
		sa(*a);
	else if(i == 3)
		sort3val(a);
	else if(i == 4)
		sort4val(a,b);
	else if(i == 5)
		sort5val(a,b);
	// if(i > 5 && i < 100)
	// 	sort100val(a,b);
	// if(i >= 100 && i <500)
	// 	sort3val(a);
	// if(i >= 500)
	// 	sort3val(a);
	// printf("%d", ft_dlstsize(*a));
	// printf("%d", ft_dlstsize(*b));
}

/* Main */

int main(int argc, char **argv)
{
	int i; 
	t_stack *a;
	t_stack *b;
	
	a = NULL;
	b = NULL;
	i = 1;
	if(argc <=1)
		return(0);
	if(ft_parsing(argv) == 0 && argc > 1)
	{
		while(argv[i])
			ft_dlstadd_back(&a, ft_atoi(argv[i++]));
		push_swap(&a,&b);
	}
	else
		ft_error();
	ft_freeall(&a,&b);
	return(0);
}
