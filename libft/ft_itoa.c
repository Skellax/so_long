/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuhrman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 12:41:44 by mfuhrman          #+#    #+#             */
/*   Updated: 2022/02/27 09:02:05 by mfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *x, unsigned int number, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (x);
}

static long int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*x;
	unsigned int	number;
	long int		len;
	int				neg;

	neg = 1;
	len = ft_len(n);
	x = malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		neg *= -1;
		number = n * neg;
		x[0] = '-';
	}
	else
		number = n;
	x = ft_array(x, number, len);
	return (x);
}
