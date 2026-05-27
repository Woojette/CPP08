#ifndef	EASYFIND_HPP
# define	EASYFIND_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <algorithm>

template	<typename T>
typename T::const_iterator	easyfind(const T& type, const int& i)
{
	std::const_iterator	it = std::find(type.begin(), type.end(), i);
	if (it != type.end())
		return (it);
	else
		throw	std::exception();
}

#endif
