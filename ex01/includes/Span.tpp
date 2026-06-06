template <typename iterator>
void    Span::addRange(iterator begin, iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		++begin;
	}
}
