/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 08:53:56 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/28 23:50:43 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_is_charset(char const str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	ft_is_word(char const *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (str[i] == 0)
		return (0);
	while (str[i])
	{
		while (ft_is_charset(str[i], c) && str[i])
			i++;
		if (!ft_is_charset(str[i], c) && str[i])
		{
			while (!ft_is_charset(str[i], c) && str[i])
				i++;
			word++;
		}
	}
	return (word);
}

static char	**ft_malloc_word(char const *str, char c, char **dest, int word)
{
	int		i;
	int		j;
	int		letter;

	i = 0;
	j = 0;
	while (str[i])
	{
		letter = 0;
		while (ft_is_charset(str[i], c) && str[i])
			i++;
		while (!ft_is_charset(str[i], c) && str[i])
		{
				letter++;
				i++;
		}
		if (j < word)
		{
			dest[j] = malloc((sizeof(char) * letter) + 1);
			if (!dest[j++])
				return (NULL);
		}
	}
	return (dest);
}

static char	**ft_put_word(char const *str, char c, char **dest)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while (ft_is_charset(str[i], c) && str[i])
			i++;
		if (!ft_is_charset(str[i], c) && str[i])
		{
			while (!ft_is_charset(str[i], c) && str[i])
				dest[k][j++] = str[i++];
			dest[k][j] = '\0';
			k++;
		}
	}
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**dest;
	int		word;

	word = ft_is_word(str, c);
	dest = malloc(sizeof(char *) * (word + 1));
	if (!dest)
		return (0);
	dest = ft_malloc_word(str, c, dest, word);
	if (!dest)
		return (NULL);
	dest = ft_put_word(str, c, dest);
	dest[word] = 0;
	return (dest);
}

int main(int argc, char **argv)
{
	int i;
	char **tab;
	t_stack **stack;
	
	i = 0;
	tab = NULL;
	stack = NULL;
	while(argv[i] && argc != 0)
	{
		tab = parsing(argv[i]);
		push(stack,tab);
		i++;
	}
	return(0);
}

int **parsing(char *argv)
{
	int i;
	int j;
	int k;
	char **tab;
	
	i = 0;
	j = 0;
	k = 0;
	tab = NULL;
	while(argv[i])
	{
		tab = ft_split(argv[i], ' ');
		i++;
	}
	while(tab[j] && argc !=0 )
	{
		while(tab[j][k])
		{	
			k++;
			printf("%s%c%s","tab[j]1 : ", tab[j][k],"\n");
		}
		printf("%s%s%s","tab[j]2 : ", tab[j],"\n");
		j++;
	}
	free(tab);
	return(0);
	
}

//Argment sortent 1 par 1 du main, pas besoin de split tt les args dun coup, un par un 
// utiliser une autre fct pour le main 