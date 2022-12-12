/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/12 04:44:39 by mfeldman         ###   ########.fr       */
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
	// int i;
	t_listdc l;
	
	// i = 0;
	ft_dlstinit(&l);
	if(ft_parsing(argv) == 0 && argc != 0)
	{
		printf("%s", "oui");
	}
	else
		ft_error();
	push_swap(&l);
	ft_dlstfree(&l);
	return(0);
}