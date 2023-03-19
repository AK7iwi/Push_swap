/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/19 19:32:58 by mfeldman         ###   ########.fr       */
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
	if(i > 3 && i <=5)
		sort(a,&b);
	if(i > 5 && i < 100)
		sort(a,&b);
	if(i >= 100 && i <500)
		sort(a,&b);
	if(i >= 500)
		sort(a,&b);
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
	if(ft_parsing(argv) == 0 && argc > 1 && argv)
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