/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamzaou@student.42abudhabi.ae             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:37:52 by shamzaou          #+#    #+#             */
/*   Updated: 2021/05/30 15:58:50 by shamzaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[size - i - 1];
		tab[size - i -1] = tab[i];
		tab[i] = temp;
		i++;
	}
}