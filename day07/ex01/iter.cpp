// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/13 13:55:21 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/13 13:55:27 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<typename A, typename L, typename V>
void	iter(A **tab, L i, V (*f)(A))
{
	int j = -1;

	while (++j < i)
	{
		f((*tab)[j]);
	}
}

void ft_putchar(char c)
{
	std::cout << c << std::endl;
}

void ft_putnbr(int c)
{
	std::cout << c <<std::endl;
}

int main()
{
	char a[] = { 'A', 'B', 'A'};
	char *c = static_cast<char*>(a);
	int	b[] = {5, 8, 15};
	int *d = static_cast<int*>(b);

	int len = 3;

	iter(&c, len, &ft_putchar);
	iter(&d, len, &ft_putnbr);
	return (0);
}