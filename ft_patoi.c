/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_patoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 23:04:49 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 08:51:04 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rec_atoi(const char *str, int rez)
{
	if (ft_pisdigit(*str))
		return (rec_atoi(str + 1, 10 * rez + (*str - '0')));
	return (rez);
}

int			ft_patoi(const char *str)
{
	char	signe;

	signe = 1;
	while (*str <= ' ' && *str > '\0')
		str++;
	if (*str == '-')
		signe = -1;
	if (*str == '+' || signe == -1)
		str++;
	if (ft_pisdigit(*str))
		return (signe * rec_atoi(str, 0));
	return (0);
}
