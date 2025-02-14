/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 08:03:46 by fepennar          #+#    #+#             */
/*   Updated: 2025/01/10 16:09:04 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
//# include <stdio.h>
# include <stdint.h>

# define HEX_UPC "0123456789ABCDEF"
# define HEX_LWC "0123456789abcdef"
# define DEC "0123456789"

void	ft_putchar_c(char c, int *count);
void	ft_putnbr_base(unsigned long int nb, char *base, int *count);
void	ft_puthex_c(unsigned int hexn, int *count, char upclwc);
void	ft_putint_c(int nb, int *count);
void	ft_checkf(char c, va_list args, int *count);
void	ft_pointer_c(uintptr_t nb, int *count);
void	ft_putstr_c(va_list args, int *count);
void	ft_putstr(char *str);
void	ft_putuint_c(unsigned int nb, int *count);
int		ft_printf(const char *text, ...);
int		ft_lens(char *str);
int		ft_point_null(void *ptr, int *count);

#endif
