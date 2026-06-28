template <typename iterator>
void    Span::addRange(iterator begin, iterator end)
{
	while (begin != end)
	{
		if ((std::distance(begin, end) + this->_vec.size()) > this->_sizeMax)
			throw	std::exception();
		addNumber(*begin);
		++begin;
	}
}
