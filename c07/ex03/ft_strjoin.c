/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:47:55 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/26 14:27:05 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_cat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_len(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		new_len;
	int		i;
	char	*new_str;

	new_len = ft_len(sep) * (size - 1);
	i = 0;
	new_str = 0;
	if (size == 0)
	{
		new_str = malloc(sizeof (char) * 1);
		new_str[0] = '\0';
		return (new_str);
	}
	while (i < size)
	{
		new_len = new_len + ft_len(strs[i]);
		i++;
	}
	new_str = malloc(sizeof (char) * new_len + 1);
	if (new_str == NULL)
		return (0);
	ft_cpy(new_str, strs[0]);
	i = 0;
	while (++i < size)
	{
		ft_cat(new_str, sep);
		ft_cat(new_str, strs[i]);
	}
	return (new_str);
}
