/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abayram <abayram@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:33:19 by abayram           #+#    #+#             */
/*   Updated: 2026/04/25 15:49:51 by abayram          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_print_nbr(int n)
{
	int		len;
	char	*s;

	len = 0;
	s = ft_itoa(n);
	if (!s)
		return (0);
	len = ft_print_str(s);
	free(s);
	return (len);
}
