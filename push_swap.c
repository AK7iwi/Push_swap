/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/22 04:23:57 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


/*Distribution des algos*/

void push_swap(t_listdc *a)
{
	t_listdc b;
	int i;
	ft_dlstinit(&b);
	i = ft_dlstsize(a);
	if(is_sorted(a) == 0)
		return;
	if(i == 2)
		sa(a);
	if(i == 3)
		sort3val(a);
	if(i == 4)
		sort4val(a,&b);
	if(i == 5)
		sort5val(a,&b);
	if(i > 5 && i < 100)
		sort5val(a,&b);
	if(i >= 100 && i <500)
		sort3val(a);
	if(i >= 500)
		sort3val(a);
	printf("%d", ft_dlstsize(a));
	printf("%d", ft_dlstsize(&b));
	ft_dlstfree(&b);
}

/*Main*/

int main(int argc, char **argv)
{
	int i; 
	t_listdc a;
	i = 1;
	ft_dlstinit(&a);
	if(argc <=1)
		return(0);
	if(ft_parsing(argv) == 0 && argc > 1)
	{
		while(argv[i])
			ft_dlstadd_back(&a, ft_atoi(argv[i++]));
		push_swap(&a);
	}
	else
		ft_error();
	ft_dlstfree(&a);
	return(0);
}