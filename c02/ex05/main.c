/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 20:23:57 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/12 20:26:32 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%d", ft_str_is_uppercase(argv[1]));
}
