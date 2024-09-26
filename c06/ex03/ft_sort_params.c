/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:44:43 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/24 10:39:22 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

char	**ft_sort_params(int size, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= (size - 1))
		{
			if (ft_strcmp(str[j], str[j + 1]) > 0)
			{
				temp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int	i;
	int	size;

	i = 1;
	size = ac - 1;
	while (i <= size)
	{
		av = ft_sort_params(size, av);
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
