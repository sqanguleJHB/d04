/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 15:02:53 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/25 09:01:01 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int		d;

	if (nb < 2)
		return (0);
	d = 1;
	while (++d < nb)
		if (!(nb % d))
			return (0);
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
