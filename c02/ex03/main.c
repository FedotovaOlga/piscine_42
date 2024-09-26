/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:03:14 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/12 20:06:11 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_str_is_numeric(argv[1]));
}

