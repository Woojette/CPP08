#include "easyfind.hpp"

int main(void)
{
	std::cout << "############### Create vector container of int {2, 12, 97, 5}###############" << std::endl << std::endl;
	std::vector<int>	vec;
	vec.push_back(2);
	vec.push_back(12);
	vec.push_back(97);
	vec.push_back(5);

	std::cout << "############### TEST: search 12 ###############" << std::endl << std::endl;
	try
	{
		int	i = 12;
		std::vector<int>::const_iterator	it;
		it = easyfind(std::vector<type>, i);
		std::cout << "result: " << it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "not found" << std::endl;
	}
	return (0);
}
