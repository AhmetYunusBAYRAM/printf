/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:07:56 by abayram           #+#    #+#             */
/*   Updated: 2026/04/25 15:49:33 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_putptr(unsigned long long ptr)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (ptr >= 16)
		len += ft_putptr(ptr / 16);
	len += ft_print_char(base[ptr % 16]);
	return (len);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	len += ft_print_str("0x");
	len += ft_putptr(ptr);
	return (len);
}
