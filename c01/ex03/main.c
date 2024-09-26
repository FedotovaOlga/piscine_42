/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:41:31 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/12 10:42:00 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod);

int     main(void)
{
                  int a = 4;
                  int b = 2;
                  int div;
                  int mod;
                  ft_div_mod(a, b, &div, &mod);
                  printf("%d\n", div);
                  printf("%d\n", mod);
}

