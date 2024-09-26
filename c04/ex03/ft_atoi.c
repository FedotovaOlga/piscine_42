/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:23:12 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/21 15:36:25 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	result;
	int	count;

	result = 0;
	count = 1;
	while (*str)
	{
		while ((*str > 8 && *str < 14) || (*str == 32))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				count = count * (-1);
			str++;
		}
		while (*str > 47 && *str < 58)
		{
			result = result * 10 + (*str - 48);
			str++;
		}
		return (result * count);
	}
	return (0);
}
