/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/09 11:58:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*Distribution des algos*/

void *push_swap(t_listdc *l)
{
	int i;
	i = ft_dlstsize(l);

	if(i < 3)
		printf("%d", i);
		// algo1();
	if(i >= 3 && i <= 500)
		printf("%d", i);
		// algo2();
	if (i > 500)
		printf("%d", i);
		// algo3();
	return(0);
}

/*Main*/

int main(int argc, char **argv)
{
	int i;
	t_listdc l;
	
	i = 0;
	ft_dlstinit(&l);
	// argv = ft_split(argv[1], ' ');
	if(ft_parsing(argv) == 0 && argc != 0)
	{
		while(argv[i++])
			ft_dlstfill(&l, ft_atoi(argv[i]));
	}
	else
		ft_error();
	push_swap(&l);
	ft_dlstfree(&l);
	return(0);
}