/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:04:44 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/20 11:05:00 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str);

int	ft_is_negatif(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	count;

	i = 0;
	result = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while ((str[i] > 8 && str[i] < 14) || (str[i] == 32))
			i++;
		while (str[i] == '-' || str[i] == '+')
			ft_is_negatif(str);
		while (str[i] > 47 && str[i] < 58)
		{
			result = result * 10 + (str[i] - 48);
			i++;
		}
		if (count % 2 == 1)
			return (result * (-1));
		else
			return (result);
	}
	return (0);
}
