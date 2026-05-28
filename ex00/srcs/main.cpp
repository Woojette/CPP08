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
		it = easyfind(vec, i);
		std::cout << "result: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "not found" << std::endl;
	}

	std::cout << std::endl << "############### TEST: search 111 ###############" << std::endl << std::endl;
	try
	{
		int	i = 111;
		std::vector<int>::const_iterator	it;
		it = easyfind(vec, i);
		std::cout << "result: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "not found" << std::endl;
	}

	std::cout << "############### Create deque container of int {2, 12, 97, 5}###############" << std::endl << std::endl;
	std::deque<int>	deq;
	deq.push_back(2);
	deq.push_back(12);
	deq.push_back(97);
	deq.push_back(5);
	std::cout << "############### TEST: search 97 ###############" << std::endl << std::endl;
	try
	{
		int	i = 97;
		std::deque<int>::const_iterator	it;
		it = easyfind(deq, i);
		std::cout << "result: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "not found" << std::endl;
	}

	std::cout << std::endl << "############### TEST: search 111 ###############" << std::endl << std::endl;
	try
	{
		int	i = 111;
		std::deque<int>::const_iterator	it;
		it = easyfind(deq, i);
		std::cout << "result: " << *it << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "not found" << std::endl;
	}

	return (0);
}
