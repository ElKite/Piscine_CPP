// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vtarreau <vtarreau@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2016/04/14 12:55:32 by vtarreau          #+#    #+#             //
//   Updated: 2016/04/14 12:55:34 by vtarreau         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <algorithm>

template <typename T>
int easyfind(T a, int i)
{
	typename T::iterator pos;
	
	pos = std::find(a.begin(), a.end(), i);
	if (pos == a.end())
		return 0;
	else
		return 1;

}