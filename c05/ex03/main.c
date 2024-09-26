/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:26:12 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/18 21:08:24 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
