#include "Span.hpp"

Span::Span() : _sizeMax(0)
{
	// std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const unsigned int N) : _sizeMax(N)
{
	// std::cout << "Span parametrized constructor called" << std::endl;
}

Span::Span(const Span& other) : _sizeMax(other._sizeMax), _vec(other._vec)
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
	this->_sizeMax = other._sizeMax;
	this->_vec = other._vec;
	}
	return (*this);
}

void	Span::addNumber(int N)
{
	if (this->_vec.size() >= this->_sizeMax)
		throw	std::exception();
	else
		this->_vec.push_back(N);
}

long	Span::shortestSpan()
{
	if (this->_vec.size() <= 1)
		throw	std::exception();

	long	min = static_cast<long>(this->_vec[0]) - static_cast<long>(this->_vec[1]);
	if (min < 0)
		min *= -1;

	for (size_t j = 0; j < this->_vec.size(); j++)
	{
		for (size_t i = j + 1; i < this->_vec.size(); i++)
		{
			long	diff = static_cast<long>(this->_vec[j]) - static_cast<long>(this->_vec[i]);
			if (diff < 0)
				diff *= -1;
			if (diff < min)
				min = diff;
		}
	}
	return (min);
}

long	Span::longestSpan()
{
	if (this->_vec.size() <= 1)
		throw	std::exception();

	long	max = this->_vec[0];
	long	min = this->_vec[0];

	for (size_t i = 0; i < this->_vec.size(); i++)
	{
		if (max < this->_vec[i])
			max = this->_vec[i];
		if (min > this->_vec[i])
			min = this->_vec[i];
	}
	return (max - min);
}
