// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/04 11:41:33 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/04 12:48:28 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int count, char **args) 
{
	if (count == 1) 
	{
		std::cout  << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else if (count > 1)
	{
		int		i = 0;
		int		j = -1;;
		char	tmp;
		while (args[++i]) 
		{
			while (args[i][++j]) {
				tmp = args[i][j];
				if (tmp >= 'a' && tmp <= 'z')
					tmp -= 32;
				std::cout << tmp;
			}
			std::cout << std::endl;
		}
	} 
	return (0);
}
