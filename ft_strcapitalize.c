/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eruellan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:23:43 by eruellan          #+#    #+#             */
/*   Updated: 2021/09/10 08:17:00 by eruellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_size_alphanum(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)
		|| (str[i] >= 48 && str[i] <= 57))
		i++;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	size;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		size = ft_str_size_alphanum(&str[i]);
		i = i + 1 + size;
	}
	return (str);
}
