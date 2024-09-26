/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:28:38 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/18 13:41:42 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int	main(int	ac, char **av)
{
	(void)ac;
	printf("Ma fonction : %d\n", ft_atoi(av[1]));
	printf("Fonction : %d", atoi(av[2]));
}
