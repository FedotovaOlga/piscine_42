/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedotov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:58:49 by ofedotov          #+#    #+#             */
/*   Updated: 2024/09/17 16:56:59 by ofedotov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str);

int	not_alphanum(char b)
{
	if ((b < 48) || (b > 57 && b < 65) || (b > 90 && b < 97) || (b > 122))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (str[i] >= 'a' && str[i] <= 'z' && not_alphanum(str[i - 1]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
