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
	if (this->_vec.size() >= this->_sizeMax;
		throw	std::exception();
	else
		this->_vec.push_back(N);
}

long	Span::shortestSpan()
{
	for	(int j = 0; j < this->_vec.size(); j++)
	{
		int	v1 = this->_vec[j];
		for (int i = j; i + 1 < this->_vec.size(); i++)
		{
			int	v2 = this->_vec[i+1];
			if (v1 >= v2)
				int	diff = v1 - v2;
			else
				int diff = v2 - v1;
		}
	}
}

long	Span::longestSpan()
{
	if (this->_vec.size <= 1)
		throw	std::exception();

	int	max = this->_vec[0];
	int	min = this->_vec[0];

	for (int i = 0; i < this->_vec.size(); i++)
	{
		if (max < this->_vec[i])
			max = this->_vec[i];
		if (min > this->_vec[i])
			min = this->_vec[i];
	}
	return (max - min);
}

long	Span::shortestSpan()
{
	if (this->_vec.size <= 1)
		throw	std::exception();

	int	min = this->_vec[0] - this->_vec[1];
	if (min < 0)
		min *= -1;

	for (int j = 0; j < this->_vec.size(); j++)
	{
		for (int i = j; i < this->_vec.size(); i++)
		{
			int	dif = this->_vec[i] - this->_vec[i+1];
			if (dif < 0)
				dif *= -1;
			if (min > dif)
				min = dif;
		}
	}
	return (min);
}
