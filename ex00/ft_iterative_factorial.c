/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqangule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 17:16:18 by sqangule          #+#    #+#             */
/*   Updated: 2020/06/19 17:22:03 by sqangule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb < 0 || nb > 12)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
