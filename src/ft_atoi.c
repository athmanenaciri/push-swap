/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:38:11 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 03:55:54 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_it(char *str, int *sign)
{
	int	i;

	i = 0;
	if (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				*sign *= -1;
			i++;
		}
		while (str[i])
		{
			if (str[i] < '0' || str[i] > '9')
				return (1);
			i++;
		}	
	}
	return (0);
}

int	check_edges(long n)
{
	if (n < -2147483648)
		return (1);
	else if (n > 2147483647)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str, int *nbr)
{
	int		i;
	int		sign;
	long	res;

	sign = -1;
	i = ft_check_it(str, &sign);
	if (i == 1)
		return (1);
	res = 0;
	if (str[0] == '-' || str[0] == '+')
		i = 1;
	else
		i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res -= str[i] - '0';
		i++;
	}
	*nbr = sign * res;
	return (check_edges(sign * res));
}
