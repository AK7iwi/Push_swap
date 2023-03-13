/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 00:41:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/03/13 17:16:59 by mfeldman         ###   ########.fr       */
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
	if(i == 2)
		sort2val(a);
	else
		sort(a,&b);
	ft_dlstfree(&b);
}

/*Main*/

int main(int argc, char **argv)
{
	int i; 
	t_listdc a;
	i = 1;
	ft_dlstinit(&a);
	if(ft_parsing(argv) == 0 && argc != 0 && argv)
	{
		while(argv[i])
		{
			ft_dlstadd_back(&a, ft_atoi(argv[i]));
			i++;
		}
		push_swap(&a);
	}
	else
		ft_error();
	ft_dlstfree(&a);
	return(0);
}