/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:37:29 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/17 12:39:43 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int   main(int ac, char **av)
{
	(void)ac;
	printf("Ma fonction : %s\n", ft_strstr(av[1], av[2]));
	printf("Fonction : %s", strstr(av[3], av[4]));
}
