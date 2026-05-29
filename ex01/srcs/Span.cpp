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
	int	dif1;

	if (this->_vec.size() > 1)
		dif1 = diff = this->_vec[i] - this->_vec[j];
	if (dif1 < 0)
		dif1 *= 1;
	for (int i = 0; i < this->_vec.size(); i++)
	{
		int	j = i + 1;
		while (j < this->_vec.size())
		{
			dif2 = this->_vec[i] - this->_vec[j];
			if (dif2 < 0)
				dif2 *= -1;
			if (dif2 != dif1)
			{
				if (dif1 > dif2)
				{
					int	temp = dif1;
					dif1 = dif2;
					dif2 = temp;
				}
			}
			j++;
		}


	}
}

long	Span::longestSpan()
{

}
