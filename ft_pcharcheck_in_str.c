/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcheck_in_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 06:15:39 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/26 13:30:40 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pcharcheck_in_str(char let, char *str)
{
	if (let && str)
	{
		while (*str)
			if (*str++ == let)
				return (1);
	}
	return (0);
}
