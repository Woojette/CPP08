#include "Span.hpp"

Span::Span() : _size(0)
{
	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const unsigned int N) : _size(N)
{
	// std::cout << "Span parametrized constructor called" << std::endl;
}

Span::Span(const Span& other) : _size(other._size), _vec(other._vec)
{
	// std::cout << "Span copy constructor called" << std::endl;
}

Span::~Span()
{
	// std::cout << "Span destructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
	//   std::cout << "Span copy assignment operator called" << std::endl;
	if (this != &other)
	{
	this->_size = other._size;
	this->_vec = other._vec;
	}
	return (*this);
}

void	Span::addNumber(int N)
{
	if (N >= _size)
		throw	std::exception();
	else
	{
		this->_vec.push_back(N);
	}
}

long	Span::shortestSpan()
{

}

long	Span::longestSpan()
{

}
