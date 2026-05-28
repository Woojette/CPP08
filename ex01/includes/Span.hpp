#ifndef SPAN_HPP
# define    SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>
# include <deque>
# include <algorithm>

class   Span
{
    private:
        int                 _size;
        std::vector<int>    _vec;
    public:
		Span();
        Span(const unsigned int N);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);

        void    addNumber(int N);
        long    shortestSpan();
        long    longestSpan(); 
}

#endif
