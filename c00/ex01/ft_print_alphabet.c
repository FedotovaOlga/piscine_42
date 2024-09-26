/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:25:15 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/05 16:55:05 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	ch;

	ch = 97;
	while (ch <= 122)
	{
		write(1, &ch, 1);
		ch++;
	}
}
