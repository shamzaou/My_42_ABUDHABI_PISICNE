/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mail <shamzaou@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:16:32 by shamzaou          #+#    #+#             */
/*   Updated: 2021/06/05 01:26:01 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_not_alphanum(char c)
{
	return (!((c >= 'A' && c <= 'Z')
				|| (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')));
}

int		is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_strlowcase(char *str)
{
	int	i;

	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
				&& (is_not_alphanum(str[i - 1])))
		{
			str[i] = str[i] - 32;
		}
		if (is_alpha(str[i])
				&& (!is_not_alphanum(str[i - 1])))
		{
			ft_strlowcase(&str[i]);
		}
		i++;
	}
	return (str);
}
