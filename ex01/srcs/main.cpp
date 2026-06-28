#include "Span.hpp"

int main(void)
{
	try
	{
		std::cout << "Test with 5 numbers:" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << '\n';
	}
	
	try
	{
		std::cout << std::endl << "Test using a range of iterators:" << std::endl;
		Span sp2 = Span(5);
		std::vector<int> vec;
		vec.push_back(6);
		vec.push_back(3);
		vec.push_back(17);
		vec.push_back(9);
		vec.push_back(11);
		sp2.addRange(vec.begin(), vec.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << '\n';
	}
	
	try
	{
		std::cout << std::endl << "Test using 10,000 numbers:" << std::endl;
		Span	sp3 = Span(10000);
		for (int i = 0; i < 10000; i++)
			sp3.addNumber(i);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << '\n';
	}

	return (0);
}
