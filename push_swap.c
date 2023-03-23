/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/23 16:13:16 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*Distribution des algos*/

void push_swap(t_stack *a,t_stack *b)
{
	int i;
	i = ft_dlstsize(a);
	printf("%d", ft_dlstsize(a));
	printf("%d", ft_dlstsize(b));
	if(i == 2)
		sa(a);
	if(i == 3)
		sort3val(a);
	if(i == 4)
		sort4val(a,b);
	if(i == 5)
		sort4val(a,b);
	if(i > 5 && i < 100)
		sort4val(a,b);
	if(i >= 100 && i <500)
		sort3val(a);
	if(i >= 500)
		sort3val(a);
	printf("%d", ft_dlstsize(a));
	printf("%d", ft_dlstsize(b));
	
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
		if(is_sorted(a) == 0)
			return (0);
		push_swap(a,b);
	}
	else
		ft_error();
	ft_dlstfree(&a);
	ft_dlstfree(&b);
	return(0);
}
