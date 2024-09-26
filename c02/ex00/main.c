/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:43:51 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/12 17:46:36 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);


int	main(int argc, char **argv)
{
	(void)argc;
	printf("Ma fonction : %s\n", ft_strcpy(argv[1], argv[2]));	
	
	printf("Fonction : %s\n", strcpy(argv[3], argv[4]));	
}
