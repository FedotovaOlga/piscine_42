/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:50:55 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/24 13:45:42 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb > 0 && power == 0)
		return (1);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
