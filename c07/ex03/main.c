/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:47:52 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/26 13:58:33 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int ac, char **av)
{
	char	*join;
	char *sep = "***";

	join = ft_strjoin(ac - 1, &av[1], sep);
	printf("%s", join);
	free(join);
}
