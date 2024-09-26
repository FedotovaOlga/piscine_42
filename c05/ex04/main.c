/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:26:12 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/19 15:08:17 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_fibonacci(atoi(argv[1])));
}
