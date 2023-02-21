/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/02/20 22:26:17 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Distribution des algos*/

void *push_swap(t_listdc *l)
{
	int i;
	i = ft_dlstsize(l);

	if(i < 3)
		printf("%d\n", i);
		// algo1();
	if(i >= 3 && i <= 500)
		printf("%d\n", i);
		// algo2();
	if (i > 500)
		printf("%d\n", i);
		// algo3();
	return(0);
}

/*Main*/

int main(int argc, char **argv)
{
	int i; 
	t_listdc l;
	t_listdc l2;
	i = 1;
	ft_dlstinit(&l);
	ft_dlstinit(&l2);
	if(ft_parsing(argv) == 0 && argc != 0)
	{
		while(argv[i])
		{
			ft_dlstadd_front(&l, ft_atoi(argv[i]));
			i++;
			printf("%s", "oui\n");
		}
	}
	else
		ft_error();
	push_swap(&l);
	push_swap(&l2);
	ft_dlstfree(&l);
	return(0);
}