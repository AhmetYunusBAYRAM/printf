/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:07:30 by abayram           #+#    #+#             */
/*   Updated: 2026/04/25 15:50:09 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_uint(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_print_uint(n / 10);
	len += ft_print_char((n % 10) + '0');
	return (len);
}
