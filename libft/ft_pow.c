/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adleau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:25:26 by adleau            #+#    #+#             */
/*   Updated: 2017/11/08 18:25:37 by adleau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_pow(int nb, int pw)
{
	int		ret;

	ret = nb;
	if (pw == 0)
		return (1);
	while (pw > 1)
	{
		ret *= nb;
		pw--;
	}
	return (ret);
}
