/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:00:19 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/24 10:41:28 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_program_name(char *nom)
{
	while (*nom != '\0')
	{
		ft_putchar(*nom);
		nom++;
	}
}

int	main(int ac, char **av)
{
	(void)ac;
	ft_print_program_name(av[0]);
	ft_putchar('\n');
}
