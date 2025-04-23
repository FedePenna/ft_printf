/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 08:36:03 by fepennar          #+#    #+#             */
/*   Updated: 2025/01/10 12:08:27 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_c(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_puthex_c(unsigned int hexn, int *count, char upclwc)
{
	if (upclwc == 'x')
		ft_putnbr_base((unsigned long long)hexn, HEX_LWC, count);
	else if (upclwc == 'X')
		ft_putnbr_base((unsigned long long)hexn, HEX_UPC, count);
}

void	ft_putint_c(int nb, int *count)
{
	long long int	nbr;

	nbr = (long long int)nb;
	if (nbr < 0)
	{
		ft_putchar_c('-', count);
		nbr = -nbr;
	}
	ft_putnbr_base((unsigned long long int)nbr, DEC, count);
}

void	ft_putstr_c(va_list args, int *count)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	while (*str)
	{
		ft_putchar_c(*str, count);
		str++;
	}
}

void	ft_putuint_c(unsigned int nb, int *count)
{
	unsigned long long int	nbr;

	nbr = (unsigned long long int)nb;
	ft_putnbr_base((unsigned long long int)nbr, DEC, count);
}
