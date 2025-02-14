/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:05:35 by fepennar          #+#    #+#             */
/*   Updated: 2025/01/10 15:41:21 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *text, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, text);
	while (*text)
	{
		if (*text == '%')
		{
			text++;
			ft_checkf(*(text++), args, &count);
		}
		else
			ft_putchar_c(*(text++), &count);
	}
	va_end(args);
	return (count);
}
/*
int	main()
{
	int	i = ft_printf("%p\n", &i);
	printf("%p\n", &i);
	ft_printf("il numero di caratteri e' %d\n", i);
	printf("(ORIGINALE) il numero di caratteri e' %d\n", i);
}
*/
