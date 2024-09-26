/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:55:14 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/12 18:38:50 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char  *ft_strncpy(char *dest, char *src, unsigned int n);
char	*strncpy(char *dest, const char *src, size_t n);

int	main(int argc, char **argv)
{
	(void)argc;
	printf("Ma fonction : %s \n", ft_strncpy(argv[1], argv[2], atoi(argv[3])));	
	printf("Fonction : %s \n", strncpy(argv[4], argv[5], atoi(argv[6])));
}
