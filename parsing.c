/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 02:44:01 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/01 21:49:21 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigitc(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_error(void)
{
	write(2, "Error\n", 6);
}

int	ft_parsing(char **argv)
{
	size_t		i;
	size_t		j;

	i = 1;
	if (!argv[1])
		return (1);
	while (argv[i])
	{
		j = 0;
		if (argv[i][0] == '+' || argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (ft_isdigitc(argv[i][j]) == 0)
				return (1);
			j++;
		}
		if (ft_check_int_max_min(argv[i]) == 1)
			return (1);
		i++;
	}
	if (ft_checkdouble(argv) == 1)
		return (1);
	return (0);
}

int	ft_checkdouble(char **argv)
{
	size_t		i;
	size_t		j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_int_max_min(char *argv)
{
	int		i;
	long	res;
	int		pos;

	i = 0;
	res = 0;
	pos = 1;
	if (argv[i] == '-')
	{
		pos = -1;
		i++;
	}
	while (argv[i])
	{
		res = res * 10 + (argv[i] - 48);
		i++;
	}
	res = res * pos;
	if (res > INT_MAX || res < INT_MIN)
		return (1);
	return (0);
}
