/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quentinmartinez <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 09:27:26 by quentinma         #+#    #+#             */
/*   Updated: 2018/02/06 11:26:22 by quentinma        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char chr;
	chr = '0';
	while (chr <= '9')
	{
		ft_putchar(chr);
		chr++;
	}
}
